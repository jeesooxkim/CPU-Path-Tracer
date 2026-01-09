#include <iostream>
#include "../include/Vector3.h"
#include <assert.h>

// #include "../build/_deps/catch2-src/src/catch2/catch_test_macros.hpp"

// TEST_CASE("vector addition works", "[require]") {
//     Vector3 v1(0.1f, -0.3f, 2.0f);
//     Vector3 v2(0.2f, 2.8f, 1.0f);
//     Vector3 v3 = v1 + v2;

//     Vector3 ans(0.3f, 2.5f, 3.0f);

//     REQUIRE(v3.x == ans.x);
//     REQUIRE(v3.y == ans.y);
//     REQUIRE(v3.z == ans.z);
// }

int main() {
    std::cout << "Project initialization" << '\n';

    Vector3 v1(0.1f, -0.3f, 2.0f);
    Vector3 v2(0.2f, 2.8f, 1.0f);
    const double epsilon = std::numeric_limits<float>::epsilon();

    // TEST: Equality operator
    Vector3 v1_copy(0.1f, -0.3f, 2.0f);
    bool true_test = v1 == v1_copy;
    assert(true_test == true);
    bool false_test = v1 == v2;
    assert(false_test == false);
    std::cout << "Passed test: Equality operator.\n";

    // TEST: Addition operator
    Vector3 sum = v1 + v2;
    assert(sum == Vector3(0.3f, 2.5f, 3.0f));
    std::cout << "Passed test: Addition operator.\n";

    // TEST: Subtraction operator
    Vector3 sub = v1 - v2;
    assert(sub == Vector3(-0.1f, -3.1f, 1.0f));
    std::cout << "Passed test: Subtraction operator.\n";

    // TEST: Mutiplication (vector) operator
    // Vector3 mult1 = v1 * v2;
    // assert(mult1 == Vector3(0.02f, -0.84f, 2.0f));
    // std::cout << "Passed test: Multiplication (vector) operator.\n";
    
    // TEST: Mutiplication (scalar) operator
    // Vector3 mult2 = v1 * 2.3f;
    // assert(mult2 == Vector3(2.3f, -0.69f, 4.6f));
    // std::cout << "Passed test: Multiplication (scalar) operator.\n";

    // TEST: Division (scalar) operator
    Vector3 mult2 = v1 / 2.0f;
    assert(mult2 == Vector3(0.05f, -0.15f, 1.0f));
    std::cout << "Passed test: Division (scalar) operator.\n";

    // TEST: Division (scalar) operator fail from 0 division
    try {
        Vector3 mult2 = v1 / 0;
    } catch (const std::logic_error& e) {
        assert(std::string(e.what()) == "Zero divison error.");
    }
    std::cout << "Passed test: Division (scalar) operator, zero division error.\n";

    // TEST: Dot product
    float dotv1v2 = v1.dot(v2);
    assert(dotv1v2 == 1.18f);
    std::cout << "Passed test: Dot product.\n";

    // // TEST: Length
    // float len = v1.length();
    // assert(len == 2.2485f);
    // std::cout << "Passed test: Length.\n";

    // // TEST: Length squared
    // assert(len*len == v1.lengthSquared());
    // std::cout << "Passed test: Length squared.\n";

    // TEST: Normalize
    v1.normalize();
    assert(v1.length() == 1.0f);
    std::cout << "Passed test: Normalize.\n";

    return 0;
}

