//
// Created by 周华 on 2021/5/1.
//

#ifndef RAYTRACING_VECTOR_H
#define RAYTRACING_VECTOR_H


class Vector3 {
public:
    Vector3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

private:
    float x = 0, y = 0, z = 0;
};


#endif //RAYTRACING_VECTOR_H
