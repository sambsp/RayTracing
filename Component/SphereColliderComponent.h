//
// Created by 周华 on 2021/5/5.
//

#ifndef RAYTRACING_SPHERECOLLIDERCOMPONENT_H
#define RAYTRACING_SPHERECOLLIDERCOMPONENT_H

#include "../Math/Vector.h"
#include "ColliderComponent.h"

class SphereColliderComponent : public ColliderComponent {
public:
    Vector3 Center;
    float Radius;

    bool RayIntersection(const Ray& ray) override;

    ~SphereColliderComponent();
};


#endif //RAYTRACING_SPHERECOLLIDERCOMPONENT_H
