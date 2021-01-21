#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base{
   private:
      double val;
      std::ostringstream str;
   public:
      Rand() : Base(){
	 val = std::rand() % 100;
	 str << val;
      }
      virtual double evaluate(){return val;}
      virtual std::string stringify(){return str.str();}
};

#endif
