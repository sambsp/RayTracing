cmake_minimum_required(VERSION 3.19)
project(RayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(RayTracing main.cpp Geometry/Sphere.cpp Geometry/Sphere.h Math/Vector.cpp Math/Vector.h Material/Material.cpp Material/Material.h Geometry/Geometry.cpp Geometry/Geometry.h Scene/Scene.cpp Scene/Scene.h Scene/Actor.cpp Scene/Actor.h Scene/Transform.cpp Scene/Transform.h Scene/ActorComonent.cpp Scene/ActorComonent.h Light/Light.cpp Light/Light.h)