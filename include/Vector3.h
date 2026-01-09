#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>
#include <cmath>
#include <stdexcept>

struct Vector3 {
    public:
        float x = 0.0f, y = 0.0f, z = 0.0f;

        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

        // OPERATOR OVERLOADS
        Vector3 operator+(const Vector3& other) const {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }
        Vector3 operator-(const Vector3& other) const {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }
        Vector3 operator*(const Vector3& other) const {
            return Vector3(x * other.x, y * other.y, z * other.z);
        }
        Vector3 operator*(const float scalar) const {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }
        Vector3 operator/(const float scalar) const {
            // TODO create custom exception classes
            if (scalar == 0) {
                throw std::logic_error("Zero divison error.");
            } 
            return Vector3(x / scalar, y / scalar, z / scalar);
        }
        bool operator==(const Vector3& other) const {
            if (x == other.x && y == other.y && z == other.z) {
                return true;
            }
            return false;
        }

        float dot(const Vector3& other) const {
            return x * other.x + y * other.y + z * other.z;
        }

        float lengthSquared() const {
            return x*x + y*y + z*z;
        }

        float length() const {
            return sqrt(lengthSquared());
        }
        
        void normalize() {
            float l = length();
            // TODO create custom exception classes
            if (l == 0) {
                throw std::logic_error("Zero divison error.");
            } 

            *this = *this/l;
        }
};

#endif