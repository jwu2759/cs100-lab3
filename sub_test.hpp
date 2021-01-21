#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubTwoOneAndFiveTwo){
	Op* left = new Op(2.1);
	Op* right = new Op(5.2);
	Sub* subTest = new Sub(left, right);
	EXPECT_EQ(subTest->evaluate(), -3.1);
}

TEST(SubTest, SubTwoOneAndFiveTwoStringify){
	Op* left = new Op(2.1);
	Op* right = new Op(5.2);
	Sub* subTest = new Sub(left, right);
	EXPECT_EQ(subTest->stringify(), "(2.1-5.2)");
}

TEST(SubTest, SubFiveTwoAndTwoOne){
	Op* left = new Op(5.2);
	Op* right = new Op(2.1);
	Sub* subTest = new Sub(left, right);
	EXPECT_EQ(subTest->evaluate(), 3.1);
}

TEST(SubTest, SubFiveTwoAndTwoOneStringify){
	Op* left = new Op(5.2);
	Op* right = new Op(2.1);
	Sub* subTest = new Sub(left, right);
	EXPECT_EQ(subTest->stringify(), "(5.2-2.1)");
}

TEST(SubTest, SubRecursive){
	Op* left = new Op(5.2);
	Op* right = new Op(2.2);
	Sub* sub1 = new Sub(left, right);
	Sub* sub2 = new Sub(sub1, right);
	EXPECT_DOUBLE_EQ(sub2->evaluate(), 0.8);	
}

TEST(SubTest, SubRecursiveStringify){
	Op* left = new Op(5.2);
	Op* right = new Op(2.2);
	Sub* sub1 = new Sub(left, right);
	Sub* sub2 = new Sub(sub1, right);
	EXPECT_EQ(sub2->stringify(), "((5.2-2.2)-2.2)");	
}

#endif
  
