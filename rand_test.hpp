#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"

TEST(RandTest, RandTest1){
	Rand* x = new Rand();
	EXPECT_DOUBLE_EQ(x->evaluate(), 83);
}

TEST(RandTest, RandTest2){
        Rand* x = new Rand();
        EXPECT_DOUBLE_EQ(x->evaluate(), 86);
}

TEST(RandTest, RandTest3){
        Rand* x = new Rand();
        EXPECT_DOUBLE_EQ(x->evaluate(), 77);
}


#endif
