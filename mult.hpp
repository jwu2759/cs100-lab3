#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base{
   private:
      Base* left = 0;
      Base* right = 0;
   public: 
      Mult(Base* x1, Base* x2) : Base(){
	 left = x1;
	 right = x2;
      }
      virtual double evaluate(){
	 return left->evaluate() * right->evaluate();
      }
      virtual std::string stringify(){
	 return "(" + left->stringify() + "*" + right->stringify() + ")";
      }
};

#endif
