#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"

TEST(MultTest, DivEvaluateZero){
	Op* x1 = new Op(0);
	Op* x2 = new Op(5);
	Mult* mult = new Mult(x1, x2);
	EXPECT_DOUBLE_EQ(mult->evaluate(), 0);
	EXPECT_EQ(mult->stringify(), "(0*5)");
}

TEST(MultTest, MultEvaluateNonZero){
        Op* x1 = new Op(5);
        Op* x2 = new Op(3);
        Mult* mult = new Mult(x1, x2);
        EXPECT_DOUBLE_EQ(mult->evaluate(), 15);
        EXPECT_EQ(mult->stringify(), "(5*3)");
}

TEST(MultTest, MultEvaluateRecursive){
        Op* x1 = new Op(3);
        Op* x2 = new Op(5);
	Op* x3 = new Op(2);
        Mult* mult = new Mult(x1, x2);
	Mult* mult1 = new Mult(mult, x3);
        EXPECT_DOUBLE_EQ(mult1->evaluate(), 30);
        EXPECT_EQ(mult1->stringify(), "((3*5)*2)");
}


#endif
