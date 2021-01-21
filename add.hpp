#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base{
   private:
      Base* leftChild = 0; 
      Base* rightChild = 0;
   public:
      Add(Base* child1, Base* child2) : Base(){
          leftChild = child1;
          rightChild = child2;
      }
      virtual double evaluate(){
	return leftChild->evaluate() + rightChild->evaluate();
	}
      virtual std::string stringify(){
	return "(" + leftChild->stringify() + "+" + rightChild->stringify() + ")";
	}

};

#endif 
