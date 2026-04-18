#include getest/gtest.h>

int add(int a, int b) {
    return a + b;
}

Test(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}