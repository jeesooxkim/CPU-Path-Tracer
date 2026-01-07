#include <iostream>
#include "../include/Vector3.h"

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

    // TEST: vector addition
    Vector3 v3 = v1 + v2;
    Vector3 ans1(0.3f, 2.5f, 3.0f);

    std::cout << "EXPECTED: " << v3.x << " " << v3.y << " " << v3.z << '\n';
    std::cout << "ACTUAL: " << ans1.x << " " << ans1.y << " " << ans1.z << "\n";

    // TEST: dot product
    float dotv1v2 = v1.dot(v2);
    float ans2 = 1.18f;

    std::cout << "EXPECTED: " << dotv1v2 << '\n';
    std::cout << "ACTUAL: " << ans2 << '\n';

    return 0;
}

