#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvaluateFive){
	Op* test1 = new Op(3);
	Op* test2 = new Op(2);
	Add* add = new Add(test1, test2);
	EXPECT_EQ(add->evaluate(), 5.0);
	EXPECT_EQ(add->stringify(), "(3+2)");
}

TEST(AddTest, AddEvaluateZero){
	Op* test1 = new Op(0);
	Op* test2 = new Op(0); 
	Add* add = new Add(test1, test2);
	EXPECT_EQ(add->evaluate(), 0.0);
	EXPECT_EQ(add->stringify(), "(0+0)");
}

TEST(AddTest, AddEvaluateRecursive){
	Op* test1 = new Op(3);
	Op* test2 = new Op(2);
	Op* test3 = new Op(2);
	Add* add1 = new Add(test1, test2);
	Add* add2 = new Add(add1, test3);
	EXPECT_EQ(add2->evaluate(), 7.0);
	EXPECT_EQ(add2->stringify(), "((3+2)+2)");
}

#endif
