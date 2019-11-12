#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Die 
{
	public:
		Die() 
		{
			int sideCnt; // We're going to assume the sides are numbered 1 - sideCnt
		}

		int sideCnt;

		int roll() 
		{
			int val = rand() % sideCnt;
			return(val);
		}
};

class Counter 
{
	public:
		int count;
};

//void initialiseDie(string dieName)
//{
//	Die dieName;
//}

string cont;
Die singleDie;
Die multiDie;
int rollNumber = 0;

int main()
{
	int state = 0;
	while (true)
	{
		switch (state) // Just do a state machine, could probably do this as a class structure but this is a more logically way.
		{
		case 0: // Make this the menu or w/e
			system("CLS");
			cout << "1. Single Roll, 2. Multi Roll \n";
			cin >> state;
			break;

		case 1: // Single Roll
			cout << "How many sides on your die? \n";
			cin >> singleDie.sideCnt;
			cout << "You rolled a... \n";
			cout << singleDie.roll();
			cout << "\nContinue? ('n' to exit to menu)";
			cin >> cont;
			if (cont == "n")
			{
				state = 0;
				break;
			}

		case 2: // Multi Roll
			cout << "How many sides on your die? \n";
			cin >> multiDie.sideCnt;
			cout << "How many times would you like to roll? \n";
			int rollCnt;
			int val; // To store the value of each roll
			cin >> rollCnt;
			//for (int number = 0; 0 < number < newDie.sideCnt) // Create a counter for each possible side value
			//{
			//	Counter number
			//}
			while (rollNumber < rollCnt)
			{
				val = multiDie.roll();
				cout << "Roll number "; cout << rollNumber + 1; cout << ": ";
				cout << val;
				cout << " \n\n";
				rollNumber += 1;
			}
			cout << "\nContinue? ('n' to exit to menu)";
			cin >> cont;
			if (cont == "n")
			{
				state = 0;
				break;
			}
			break;
		}
	}

	//Die newDie;
	//cout << "You rolled a... ";
	//cout << newDie.roll();
	//return 0;
}
