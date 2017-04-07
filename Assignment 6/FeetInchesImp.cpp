// Implementation file for the FeetInches class
#include <cstdlib>       // Needed for abs()
#include <iostream>
#include "FeetInches.h"
using namespace std;


bool FeetInches::operator > (const FeetInches &right)
{
	bool istrue;

	if (feet > right.feet)
		istrue = true;
	else if ((feet == right.feet) && (inches > right.inches))
		istrue = true;
	else
		istrue = false;

	return istrue;
}
           

bool FeetInches::operator < (const FeetInches &right)
{
	bool istrue;

	if (feet < right.feet)
		istrue = true;
	else if ((feet == right.feet) && (inches < right.inches))
		istrue = true;
	else
		istrue = false;

	return istrue;
}

istream& operator >> (istream& is, FeetInches& number)
{
	char comma;

	is >> number.feet;
	is >> comma;
	is >> number.inches;

	return is;

}

ostream& operator << (ostream& os, const FeetInches& number)
{
	os << number.feet << " feet, " << number.inches << " inches";
	return os;

}
