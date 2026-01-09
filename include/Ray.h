#ifndef RAY_H
#define RAY_H

#include <iostream>
#include "Vector3.h"

struct Ray {
    Vector3 origin;
    Vector3 direction;
    
    Vector3 at(float t) const {
        return origin + direction * t; // TODO make arithmetic bidirectional
    }
};

#endif