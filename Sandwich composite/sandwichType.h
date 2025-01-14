#ifndef H_sandwichType
#define H_sandwichType

#include "breadType.h"
#include "fillingType.h"

#include <iostream>
#include <string>

using namespace std;

enum bread { TOP_SLICE, BOTTOM_SLICE };

class sandwichType
{
public:
	void skipLines(int num);

	void longLine();

	void printTempMessage();

	void checkSelection(int& selection, int numOfSelections);

	void displayOptions(string selections[], int selection, int numOfSelections);

	// Menus
	void menuStart();

	// Constructors
	sandwichType();

	~sandwichType();

private:
	breadType breadSlice[BOTTOM_SLICE + 1];
	fillingType* pFilling;

	string tempMessage;

};

#endif