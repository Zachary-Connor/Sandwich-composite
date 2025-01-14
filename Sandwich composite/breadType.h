//************************
// Author: Zachary Connor
// Date Created: 1/14/2025
// Class: ITCS 2550
//************************
#pragma once
#ifndef H_breadType
#define H_breadType

#include <string>
using namespace std;

class breadType
{
public:
	void setBread(string b);
	//pre: Function that takes a string argument and sends the value b to bread
	//post: bread = b;

	string getBread() const;
	//pre: Function that returns the value of bread
	//post: return bread;

	void print() const;
	//pre: Function that prints the value of bread
	//post: Bread = " "

	breadType(string b = "Wheat");
	//pre: Default constructor with one string argument which is the value for bread
	//post: bread = b;

private:
	string bread; //variable that stores the value of the bread
};

#endif
