#include <cstring>
#include <gtest/gtest.h>

TEST(memcpy, test1) {
    int a[] = {1, 2, 3};
    int b[3];
     
    memcpy(b, a, sizeof(int) * 3);

    EXPECT_EQ(1, b[0]);
    EXPECT_EQ(2, b[1]);
    EXPECT_EQ(3, b[2]);
}
