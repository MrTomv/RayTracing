cmake_minimum_required(VERSION 3.26)
project(RayTracing)

set(CMAKE_CXX_STANDARD 17)

add_executable(RayTracing src/main.cpp
        src/main.cpp
        includes/vec3.h
        includes/color.h
        includes/hittable.h
        includes/sphere.h
        includes/hittable_list.h
        includes/rtweekend.h
        includes/interval.h
        includes/camera.h
        includes/ray.h
)
