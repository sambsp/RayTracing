//
// Created by 周华 on 2021/5/1.
//

#ifndef RAYTRACING_SPHERE_H
#define RAYTRACING_SPHERE_H

#include "../Math/Vector.h"

class Sphere {
public:
    //这里const保证参数不被修改，引用保证结构不需要在参数化时进行值拷贝
    Sphere(const Vector3& Center, float Radius) {
        this->Center = Center;
        this->Radius = Radius;
    }

    float Radius = 0;
    Vector3 Center;
};


#endif //RAYTRACING_SPHERE_H
