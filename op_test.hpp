#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

//new tests start here
TEST(OpTest, StringifyDouble) {
    Op* test = new Op(8.5);
    EXPECT_EQ(test->stringify(), "8.5");
}

TEST(OpTest, StringifyNegDouble){
    Op* test = new Op(-8.5);
    EXPECT_EQ(test->stringify(), "-8.5");
}

TEST(OpTest, StringifyInt){
    Op* test = new Op(4);
    EXPECT_EQ(test->stringify(), "4");
}

TEST(OpTest, OpEvaluateDouble) {
	SevenFiveOpMock* test = new SevenFiveOpMock();
	EXPECT_EQ(test->evaluate(), 7.5);
}

TEST(OpTest, OpEvaluateNegDouble) {
	NegFiveFiveOpMock* test = new NegFiveFiveOpMock();
	EXPECT_EQ(test->evaluate(), -5.5);
}

TEST(OpTest, ZeroOpMock){
	ZeroOpMock* test = new ZeroOpMock();
	EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, ThreeOpMock){
	ThreeOpMock* test = new ThreeOpMock();
	EXPECT_EQ(test->evaluate(), 3.0);
}

#endif //__OP_TEST_HPP__
