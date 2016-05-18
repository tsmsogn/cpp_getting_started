#include <algorithm>
#include <gtest/gtest.h>

TEST(array, sorting) {
    int foo[3] = {1, 3, 2};

    std::sort(foo, foo + 3);

    EXPECT_EQ(1, foo[0]);
    EXPECT_EQ(2, foo[1]);
    EXPECT_EQ(3, foo[2]);
}

TEST(swap, test1) {
    int a = 1;
    int b = 2;

    std::swap(a, b);

    EXPECT_EQ(2, a);
    EXPECT_EQ(1, b);
}
