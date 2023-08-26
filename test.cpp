/*
 * g++ test.cpp -lgtest_main -lgtest -lpthread -o test
 *
 */

#include <gtest/gtest.h>

int sum(int a, int b)
{
    return a + b;
}

TEST(TestCase, sumTest)
{
    EXPECT_EQ(2, sum(1, 1));
}
