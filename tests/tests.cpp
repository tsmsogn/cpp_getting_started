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

TEST(cast, string_to_int) {
    EXPECT_EQ(0, '0' - 48);
    EXPECT_EQ(1, '1' - 48);
    EXPECT_EQ(2, '2' - 48);
    EXPECT_EQ(3, '3' - 48);
    EXPECT_EQ(4, '4' - 48);
    EXPECT_EQ(5, '5' - 48);
    EXPECT_EQ(6, '6' - 48);
    EXPECT_EQ(7, '7' - 48);
    EXPECT_EQ(8, '8' - 48);
    EXPECT_EQ(9, '9' - 48);
}

TEST(cast, int_to_string) {
    EXPECT_EQ('0', 0 + 48);
    EXPECT_EQ('1', 1 + 48);
    EXPECT_EQ('2', 2 + 48);
    EXPECT_EQ('3', 3 + 48);
    EXPECT_EQ('4', 4 + 48);
    EXPECT_EQ('5', 5 + 48);
    EXPECT_EQ('6', 6 + 48);
    EXPECT_EQ('7', 7 + 48);
    EXPECT_EQ('8', 8 + 48);
    EXPECT_EQ('9', 9 + 48);
}
