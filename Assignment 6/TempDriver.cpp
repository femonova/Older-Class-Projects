/***********************************************************************
Name: Olufemi Adeshina

Description: This program's purpose is to test our templates and overload the >>
and << operators to accept our FeetInches Class. We created a maximum/minimum 
template that should return the max and min!
************************************************************************/

#include <iostream>
#include "FeetInches.h"
#include <string>
using namespace std;

template <typename T>
T maximum(T value1, T value2)
{

	if (value1 > value2 == true)
	{
		return value1;
	}
	else
		return value2;
}

template <typename Q>
Q minimum(Q value1, Q value2)
{

	if (value1 < value2 == true)
	{
		return value1;
	}
	else
		return value2;
}


int main(void) {

	//First we declare our variables, and we test each data type individually!
	int int1, int2;
	double float1, float2;
	string string1, string2, string3;
	FeetInches feet1, feet2;

	//Testing our template with type int below. In hindsight I could have wrote a function to print this to screen without retyping...
	cout << "Please enter two integers: " << endl;
	cin >> int1 >> int2;
	cout << "The minimum of " << int1 << " and " << int2 << " is " << minimum(int1, int2) << endl;
	cout << "The maximum of " << int1 << " and " << int2 << " is " << maximum(int1, int2) << endl;

	//Testing our template with type float below
	cout << "Please enter two floats: " << endl;
	cin >> float1 >>float2;
	cout << "The minimum of " << float1 << " and " << float2 << " is " << minimum(float1, float2) << endl;
	cout << "The maximum of " << float1 << " and " << float2 << " is " << maximum(float1, float2) << endl;

	//Testing our template with type strings below
	cout << "Please enter first string: ";
	cin.ignore(); // Flush out the newline character
	getline(cin, string1);
	cout << "Please enter second string: ";
	getline(cin, string2);
	cout << "The minimum of " << string1 << " and " << string2 << " is " << minimum(string1, string2) << endl;
	cout << "The maximum of " << string2 << " and " << string2 << " is " << maximum(string1, string2) << endl;

	//Testing our template with type FeetInches below
	cout << "Please enter first number (feet, inches): ";
	cin >> feet1;
	cout << "Please enter second number (feet, inches): ";
	cin >> feet2;
	cout << "The minimum of " << feet1 << " and " << feet2 << " is " << minimum(feet1, feet2) << endl;
	cout << "The maximum of " << feet1 << " and " << feet2 << " is " << maximum(feet1, feet2) << endl;

}