#include "gmock/gmock.h"

using namespace testing;

extern "C" {
}

TEST( gcd_test, starts_here )
{
    ASSERT_TRUE(false);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleMock(&argc,argv);
    return RUN_ALL_TESTS();
}
