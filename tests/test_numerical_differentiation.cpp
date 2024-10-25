#include "gtest/gtest.h"
#include "labs/DerivativeCoef/DerivativeCoef.h"
TEST(calcDerivativeCoef, TEST)
{
    std::array<double, 2> a = {-1, 1};
    DerivativeCoef<double, 2> coefs = calcDerivativeCoef<double, 2, 2>(a);
    EXPECT_EQ(coefs.centralCoef, -2);
}
