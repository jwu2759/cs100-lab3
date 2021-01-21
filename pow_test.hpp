#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"


//note, pow() was not meant to support negative finite base to any value.
TEST(PowTest, PowDoubleToDouble){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_NEAR(powTest->evaluate(), 3.953, 0.001);
}

TEST(PowTest, PowDoubleToDoubleStringify){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_EQ(powTest->stringify(), "(2.5**1.5)");
}

TEST(PowTest, PowDoubleToNegDouble){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(-1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_NEAR(powTest->evaluate(), 0.253, 0.001);
}

TEST(PowTest, PowDoubleToNegDoubleStringify){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(-1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_EQ(powTest->stringify(), "(2.5**-1.5)");
}

TEST(PowTest, PowDoubleToZero){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(0);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_DOUBLE_EQ(powTest->evaluate(), 1);
}

TEST(PowTest, PowDoubleToZeroStringify){
	Op* test1 = new Op(2.5);
	Op* test2 = new Op(0);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_EQ(powTest->stringify(), "(2.5**0)");
}

TEST(PowTest, PowZeroToDouble){
	Op* test1 = new Op(0);
	Op* test2 = new Op(1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_DOUBLE_EQ(powTest->evaluate(), 0);
}

TEST(PowTest, PowZeroToDoubleStringify){
	Op* test1 = new Op(0);
	Op* test2 = new Op(1.5);
	Pow* powTest = new Pow(test1,test2);
	EXPECT_EQ(powTest->stringify(), "(0**1.5)");
}

TEST(PowTest, Recursive){
	Op* test1 = new Op(2.5);
	Pow* powTest = new Pow(test1,test1);
	Pow* powTest2 = new Pow(powTest,test1);
	EXPECT_NEAR(powTest2->evaluate(), 306.991, 0.001);
}

TEST(PowTest, RecursiveStringify){
	Op* test1 = new Op(2.5);
	Pow* powTest = new Pow(test1,test1);
	Pow* powTest2 = new Pow(powTest,test1);
	EXPECT_EQ(powTest2->stringify(), "((2.5**2.5)**2.5)");
}

#endif
