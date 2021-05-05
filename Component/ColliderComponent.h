//
// Created by 周华 on 2021/5/5.
//

#ifndef RAYTRACING_COLLIDERCOMPONENT_H
#define RAYTRACING_COLLIDERCOMPONENT_H


#include "../Geometry/Ray.h"

class ColliderComponent {
public:
    virtual bool RayIntersetion(const Ray& ray) = 0;

    ~ColliderComponent() {}
};


#endif //RAYTRACING_COLLIDERCOMPONENT_H
