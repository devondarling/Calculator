/*
 * Calculator.cpp
 *
 *  Date: 07-11-2020
 *  Author: Devon C Darling
 */

#include <iostream>
using namespace std; // needed to use cout and cin

int main() // main must return int so change void to int
{
	char statement[100]; // unused variable
	int op1, op2;
	char operation;
	char answer='Y'; // need ; to indicate end of line, changed double quote to single to indicate char
	while (answer == 'y' || answer == 'Y') // added upper case Y so both inputs of why are usable
		// also added spaces to first answer == statement.
	{
		cout << "Enter expression" << endl; // not a bug but added space before endl
		cin >> op1 >> operation >> op2; // interchange op1 and op2, otherwise calculation is inaccurate
		if (operation == '+') // deleted semicolon, changed double quote to single quote, can't use == string
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // change >> to << because it is necessary for cout
		if (operation == '-') // deleted semicolon
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // >> to << for cout
		if (operation == '*')
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // add semicolon to end line
						// change / to *, correct output
		if (operation == '/')
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
						// change * to /, correct output

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
		if(answer == 'N' || answer == 'n'){
			cout << "Program Finished." << endl;
		}
	}
	return 0; // int must be returned
}







