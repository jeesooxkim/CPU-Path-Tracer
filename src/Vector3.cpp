#include "../include/Vector3.h"
#include <iostream>


Vector3* add(Vector3 v1, Vector3 v2) {
    double nX = v1.x + v2.x;
    double nY = v1.y + v2.y;
    double nZ = v1.z + v2.z;

    return new Vector3(nX, nY, nZ);
}