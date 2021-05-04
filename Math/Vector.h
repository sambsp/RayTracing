//
// Created by 周华 on 2021/5/1.
//

#ifndef RAYTRACING_VECTOR_H
#define RAYTRACING_VECTOR_H


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
    Vector3 operator+ (const Vector3& rhs) {
        return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
    }

    // 乘法重载，方便写 vSelf * 系数（rhs）这样的等式
    Vector3 operator* (float mul) {
        return Vector3(x * mul, y * mul, z * mul);
    }

    // 作为引用的返回，必须让编译器看到不是临时的变量
    Vector3& operator- (const Vector3& rhs) {
        Vector3* result = new Vector3();
        return *result;
    }

    // 3维向量的内部存储，x、y、z在实际意义上可能是向量、位置、三原色的r、g、b等等
    float x = 0, y = 0, z = 0;
};


#endif //RAYTRACING_VECTOR_H
