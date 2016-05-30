#include <stack>
#include <gtest/gtest.h>

TEST(stack, test) {
    std::stack<int> stack;

    EXPECT_EQ(0, stack.size());

    stack.push(1);
    stack.push(2);

    EXPECT_EQ(2, stack.size());
    EXPECT_EQ(2, stack.top());

    stack.pop();

    EXPECT_EQ(1, stack.size());
    EXPECT_EQ(1, stack.top());

    stack.pop();

    EXPECT_EQ(0, stack.size());
}
