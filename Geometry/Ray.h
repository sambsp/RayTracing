//
// Created by 周华 on 2021/5/4.
//

#ifndef RAYTRACING_RAY_H
#define RAYTRACING_RAY_H

#include "../Math/Vector.h"
#include "Geometry.h"

class Ray : public Geometry {
public:
    Ray(const Vector3& origin, const Vector3& direction) {
        this->origin = origin;
        this->direction = direction;
    }

    ~Ray() {}

    Vector3 origin;
    Vector3 direction;

    Vector3 GetPoint(float distance);

private:

};


#endif //RAYTRACING_RAY_H
