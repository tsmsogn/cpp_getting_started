#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

TEST(sizeof, test1) {
    char str1[10];
    char str2[] = "Hello World!";

    EXPECT_EQ(10, sizeof(str1));
    EXPECT_EQ(13, sizeof(str2));
}

TEST(memcpy, test1) {
    int a[] = {1, 2, 3};
    int b[3];
     
    memcpy(b, a, sizeof(int) * 3);

    EXPECT_EQ(1, b[0]);
    EXPECT_EQ(2, b[1]);
    EXPECT_EQ(3, b[2]);
}

TEST(swap, test1) {
    int a = 1;
    int b = 2;

    std::swap(a, b);

    EXPECT_EQ(2, a);
    EXPECT_EQ(1, b);
}

TEST(array, test1) {
    int foo[2] = {1};

    EXPECT_EQ(1, foo[0]);
    EXPECT_EQ(0, foo[1]);
}

TEST(array, sorting) {
    int foo[3] = {1, 3, 2};

    std::sort(foo, foo + 3);

    EXPECT_EQ(1, foo[0]);
    EXPECT_EQ(2, foo[1]);
    EXPECT_EQ(3, foo[2]);
}
