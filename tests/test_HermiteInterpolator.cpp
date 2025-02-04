#include "../third_party/googletest/googletest/include/gtest/gtest.h"
#include "../src/labs/HermiteInterpolator/HermiteInterpolator.h"
TEST(interpolant, TEST)
{
    std::array<double, 13> constexpr points = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.55, 0.6, 0,7, 0.8, 0.9, 1};
    std::array<double, 13> constexpr values = {
        1,
        1.105170918075647,
        1.221402758160169,
        1.349858807576003,
        1.491824697641270,
        1.648721270700128,
        1.733253017867395,
        1.822118800390508,
        2.013752707470476,
        2.225540928492467,
        2.459603111156949,
        2.718281828459045
    };
    auto const interpolated = HermiteInterpolator<double, double, 13>(points, values, values);
    ASSERT_NEAR(interpolated.interpolate(0.51), 1.6652911949458, 1e-2);
}