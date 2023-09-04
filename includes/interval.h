//
// Created by 阿标 on 2023/9/3.
//

#ifndef RAYTRACING_INTERVAL_H
#define RAYTRACING_INTERVAL_H

#include "rtweekend.h"

class interval{
    public:
        double min, max;
        interval(): min(+infinity), max(-infinity){}
        interval(double _min, double _max) : min(_min), max(_max){}
        bool contains(double x) const{
            return min <= x && x <= max;
        }

        bool surrounds(double x) const {
            return min < x && x <max;
        }

        double clamp(double x) const{
            if(x < min) return min;
            if(x > max) return max;
            return x;
        }
        static const interval empty, universe;
};
const static interval empty   (+infinity, -infinity);
const static interval universe(-infinity, +infinity);

#endif //RAYTRACING_INTERVAL_H
