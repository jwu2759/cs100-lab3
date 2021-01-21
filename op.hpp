#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private: 
	double val;
    public:
        Op(double value) : Base() {val = value;}
        virtual double evaluate() { return val; }
	virtual std::string stringify() { return std::to_string(val); }
};

class SevenFiveOpMock : public Base{
    public: 
	SevenFiveOpMock(){ }

	virtual double evaluate() {return 7.5;}
	virtual std::string stringify() {return "7.5";}
};

class NegFiveFiveOpMock : public Base {
    public:
	NegFiveFiveOpMock(){ }
	
	virtual double evaluate() {return -5.5;}
	virtual std::string stringify() {return "-5.5";}
};

class ZeroOpMock : public Base{
    public:
	ZeroOpMock(){ }
	
	virtual double evaluate() {return 0.0;}
	virtual std::string stringify() {return "0.0";}
};

class ThreeOpMock : public Base{
    public:
	ThreeOpMock(){ }
	
	virtual double evaluate() {return 3.0;}
	virtual std::string stringify() {return "3.0";}
};	
#endif //__OP_HPP__
