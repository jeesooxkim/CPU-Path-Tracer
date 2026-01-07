#ifndef VECTOR3_H
#define VECTOR3_H

struct Vector3 {
    public:
        float x = 0.0f, y = 0.0f, z = 0.0f;

        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

        // ARITHMETIC OPERATIONS
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

        float dot(const Vector3& other) const {
            return x * other.x + y * other.y + z * other.z;
        }
        
        void normalize();
};

#endif