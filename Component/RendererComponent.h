//
// Created by 周华 on 2021/5/5.
//

#ifndef RAYTRACING_RENDERERCOMPONENT_H
#define RAYTRACING_RENDERERCOMPONENT_H

#include <memory>
#include "../Geometry/Geometry.h"

class Material;

// unique_ptr: 同一时间只有一个指针指向实例（内存），不可能有第二个。指针的控制权在第二个指向的时候就会转移。
// shared_ptr：强指针。
// weak_ptr：防止父子之间产生死循环的指针。

class RendererComponent {
public:
    ~RendererComponent() {}

    std::shared_ptr<Material> MaterialPtr = nullptr;
    std::shared_ptr<Geometry> GeometryPtr = nullptr;
};

#endif //RAYTRACING_RENDERERCOMPONENT_H
