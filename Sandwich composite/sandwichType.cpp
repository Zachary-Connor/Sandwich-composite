#include "sandwichType.h"

void sandwichType::printTempMessage()
{
	longLine();
	cout << tempMessage << endl;

	tempMessage = "";
}

void sandwichType::longLine()
{
	cout << "----------------------------------------" << endl;
}

void sandwichType::skipLines(int num)
{
	for (int index = 0; index < num; index++)
	{
		cout << endl;
	}
}

void sandwichType::checkSelection(int& selection, int numOfSelections)
{
	if (selection < 0)
	{
		selection = numOfSelections - 1;
	}

	else if (selection >= numOfSelections)
	{
		selection = 0;
	}
}

void sandwichType::displayOptions(string selections[], int selection, int numOfSelections)
{
	longLine();

	for (int index = 0; index < numOfSelections; index++)
	{
		if (index == selection)
		{
			cout
				<< '['
				<< selections[index]
				<< ']'
				<< endl;
		}

		else
		{
			cout
				<< ' '
				<< selections[index]
				<< ' '
				<< endl;
		}
	}
}

// Menus
void sandwichType::menuStart()
{
	string response;
	bool exit = false;

	while (!exit)
	{
		skipLines(50);

		// Title Message
		longLine();
		cout << "Bank" << endl;

		// Temp Message
		printTempMessage();

		// Controls
		longLine();
		cout
			<< "e to use bank"
			<< endl
			<< "q to leave bank"
			<< endl;

		// Response
		longLine();
		getline(cin, response);

		// Options
		if (toupper(response[0]) == 'Q')
		{
			exit = true;
		}

		else if (toupper(response[0]) == 'E')
		{
			//menuLogin();
		}
	}
}

sandwichType::sandwichType()
{

}

sandwichType::~sandwichType()
{
	delete[] pFilling;
}