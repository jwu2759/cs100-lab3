#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base{
   private:
      Base* left = 0;
      Base* right = 0;
   public:
      Div(Base* child1, Base* child2) : Base(){
         left = child1;
	 right = child2;
      }
      virtual double evaluate(){
	 return left->evaluate() / right->evaluate();
      }
      virtual std::string stringify(){
	 return "(" + left->stringify() + "/" + right->stringify() + ")";
      }

};

#endif
