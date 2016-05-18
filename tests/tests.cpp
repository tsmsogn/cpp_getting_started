#include <gtest/gtest.h>

TEST(sizeof, test1) {
    char str1[10];
    char str2[] = "Hello World!";

    EXPECT_EQ(10, sizeof(str1));
    EXPECT_EQ(13, sizeof(str2));
}

TEST(array, test1) {
    int foo[2] = {1};

    EXPECT_EQ(1, foo[0]);
    EXPECT_EQ(0, foo[1]);
}
