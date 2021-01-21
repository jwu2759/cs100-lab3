#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
	private:
		Base* left = 0;
		Base* right = 0;
	public:
		Sub(Base* c1, Base* c2) {
			left = c1;
			right = c2;
		}
		virtual double evaluate(){
			return left->evaluate() - right->evaluate();
		}
		virtual std::string stringify(){
			return "(" + left->stringify() + "-" + right->stringify() + ")";
		}
};

#endif
