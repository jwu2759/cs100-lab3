#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"

TEST(RandTest, RandTest1){
	Rand* x = new Rand();
	std::cout << x->evaluate() << std::endl;
}

TEST(RandTest, RandTest2){
        Rand* x = new Rand();
        std::cout << x->evaluate() << std::endl;
}

TEST(RandTest, RandTest3){
        Rand* x = new Rand();
        std::cout << x->evaluate() << std::endl;
}


#endif
