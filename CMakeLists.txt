cmake_minimum_required(VERSION 3.19)
project(RayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(RayTracing main.cpp Geometry/Sphere.cpp Geometry/Sphere.h Math/Vector.cpp Math/Vector.h Material/Material.cpp Material/Material.h Geometry/Geometry.cpp Geometry/Geometry.h Scene/Scene.cpp Scene/Scene.h Scene/Actor.cpp Scene/Actor.h Component/TransformComponent.cpp Component/TransformComponent.h Light/Light.cpp Light/Light.h Component/Component.cpp Component/Component.h Component/RayIntersectionComponent.cpp Component/RayIntersectionComponent.h Geometry/Ray.cpp Geometry/Ray.h)