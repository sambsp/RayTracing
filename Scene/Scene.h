// Created by 周华 on 2021/5/1.
//

#ifndef RAYTRACING_SCENE_H
#define RAYTRACING_SCENE_H

#include <map>
#include "Actor.h"


class Scene {
public:
    ~Scene() {}

    void AddActor(const Actor* actor);
    void RemoveActor(const Actor* actor);

private:
    std::map<std::string, std::shared_ptr<Actor>> ActorMap;
};


#endif //RAYTRACING_SCENE_H
