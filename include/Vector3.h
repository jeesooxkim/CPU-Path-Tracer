#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3 {
    public:
        double x;
        double y;
        double z;

        Vector3(double xCoord, double yCoord, double zCoord) {
            x = xCoord;
            y = yCoord;
            z = zCoord;
        }

        Vector3* add(Vector3 v1, Vector3 v2);
        // void normalize();
};

#endif