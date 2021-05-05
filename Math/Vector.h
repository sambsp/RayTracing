//
// Created by 周华 on 2021/5/1.
//

#ifndef RAYTRACING_VECTOR_H
#define RAYTRACING_VECTOR_H

#include <cassert>

class Vector3 {
public:
    // 默认构造，初始化所有的值为0
    Vector3() {
        x = 0;
        y = 0;
        z = 0;
    }

    // 带参数的构造，以参数里的x、y、z初始化内部的值
    Vector3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // 乘法重载，方便写 vSelf + vTarget(rhs) 这样的等式
    Vector3 operator+ (const Vector3& rhs) const {
        return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
    }

    // 乘法重载，方便写 vSelf * 系数（rhs）这样的等式
    Vector3 operator* (float rhs) const {
        return Vector3(x * rhs, y * rhs, z * rhs);
    }

    // 除法重载，格式: vResult = vSelf / float
    Vector3 operator/ (float rhs) const {
        assert(rhs != 0.0f);
        float inverse = 1 / rhs;
        return Vector3(x * inverse, y * inverse, z * inverse);
    }

    // 作为引用的返回，必须让编译器看到不是临时的变量
    Vector3 operator- (const Vector3& rhs) const {
        return Vector3(x-rhs.x, y-rhs.y, z-rhs.z);
    }

    // 点乘，结果是一个浮点数。该方法不会修改成员方法所对应实例的任何成员变量。
    float Dot(const Vector3& rhs) const {
        return x * rhs.x + y * rhs.y + z * rhs.z;
    }

    // 叉乘，结果是向量。该方法不会修改成员方法所对应实例的任何成员变量。
    Vector3 Cross(const Vector3& rhs) const {
        return Vector3(y*rhs.z-z*rhs.y, z*rhs.x-x*rhs.z, x*rhs.y-y*rhs.x);
    }

    // 运算较快的长度相关方法，返回 x*x + y*y + z*z
    float SqrLength() {
        return x*x + y*y + z*z;
    }

    // 向量的长度
    float Length() {
        return sqrt(x*x + y*y + z*z);
    }

    // 3维向量的内部存储，x、y、z在实际意义上可能是向量、位置、三原色的r、g、b等等
    float x = 0, y = 0, z = 0;

    static float Dot(const Vector3& lhs, const Vector3& rhs);
    static Vector3 Cross(const Vector3& lhs, const Vector3& rhs);
};




#endif //RAYTRACING_VECTOR_H
