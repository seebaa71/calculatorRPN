//
// Created by Sebastian Kamraj on 21/02/2021.
//

#include "gtest/gtest.h"
#include "calculator.h"

TEST(Operations, Adding){
    calculator first;
    first.setNumber(10);
    first.setNumber(20);
    first.setOperationToTest("+");
    first.setOperationToTest("=");

    ASSERT_EQ(first.result(),30);

}
TEST(Operations, Substracting){
    calculator first;
    first.setNumber(10);
    first.setNumber(20);
    first.setOperationToTest("-");
    first.setOperationToTest("=");

    ASSERT_EQ(first.result(),-10);

}
TEST(Operations, Multiplying){
    calculator first;
    first.setNumber(10);
    first.setNumber(20);
    first.setOperationToTest("*");
    first.setOperationToTest("=");

    ASSERT_EQ(first.result(),200);

}

TEST(Operations, Multiplying2){
    calculator first;
    first.setNumber(10);
    first.setNumber(20);
    first.setOperationToTest("*");
    first.setOperationToTest("=");
    EXPECT_EQ(first.result(),100);
}


