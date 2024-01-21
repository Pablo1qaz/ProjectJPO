#include "gtest/gtest.h"
#include "pch.h"
#include "gtest.h"

TEST(DecimalToBinaryTest, PositiveValues) {
    EXPECT_EQ(CKonwerterFunctions::DecimalToBinary(10), "1010");
    EXPECT_EQ(CKonwerterFunctions::DecimalToBinary(255), "11111111");

}

TEST(DecimalToBinaryTest, Zero) {
    EXPECT_EQ(CKonwerterFunctions::DecimalToBinary(0), "0");
}

TEST(DecimalToBinaryTest, NegativeValues) {
    EXPECT_EQ(CKonwerterFunctions::DecimalToBinary(15), "101");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}