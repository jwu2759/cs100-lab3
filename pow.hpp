#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>

class Pow : public Base {
	private:
		Base* left = 0;
		Base* right = 0;
	public:
		Pow(Base* l, Base* r){
			left = l;
			right = r;
		}
		virtual double evaluate(){
			return pow(left->evaluate(),right->evaluate());
		}
		virtual std::string stringify(){
			return "(" + left->stringify() + "**" + right->stringify() + ")";
		}
};

#endif
