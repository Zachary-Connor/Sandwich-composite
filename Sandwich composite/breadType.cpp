//************************
// Author: Zachary Connor
// Date Created: 1/14/2025
// Class: ITCS 2550
//************************
#include "breadType.h"
#include <iostream>
using namespace std;

void breadType::setBread(string b)
{
    bread = b;
}

string breadType::getBread() const
{
    return bread;
}

void breadType::print() const
{
    cout << "Bread Type = " << bread << " ";
}

breadType::breadType(string b)
{
    bread = b;
}