#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"

TEST(DivTest, DivEvaluateTwo){
	Op* x1 = new Op(10);
	Op* x2 = new Op(5);
	Div* div = new Div(x1, x2);
	EXPECT_DOUBLE_EQ(div->evaluate(), 2);
	EXPECT_EQ(div->stringify(), "(10/5)");
}

TEST(DivTest, DivEvaluateZero){
        Op* x1 = new Op(0);
        Op* x2 = new Op(3);
        Div* div = new Div(x1, x2);
        EXPECT_DOUBLE_EQ(div->evaluate(), 0);
        EXPECT_EQ(div->stringify(), "(0/3)");
}

TEST(DivTest, DivEvaluateRecursive){
        Op* x1 = new Op(10);
        Op* x2 = new Op(5);
	Op* x3 = new Op(2);
        Div* div = new Div(x1, x2);
	Div* div1 = new Div(div, x3);
        EXPECT_DOUBLE_EQ(div1->evaluate(), 1);
        EXPECT_EQ(div1->stringify(), "((10/5)/2)");
}


#endif
