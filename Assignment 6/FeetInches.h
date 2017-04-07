#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <iostream>
using namespace std;

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.
class FeetInches 
{

private:    
	int feet;        // To hold a number of feet   
	int inches;      // To hold a number of inches   

public:    

	// Constructor   
	FeetInches(int f = 0, int i = 0)       
	{ feet = f;         
	inches = i;}    
	// Mutator functions   

	void setFeet(int f)      
	{ feet = f; }    

	void setInches(int i)       
	{ inches = i; }    
	
	// Accessor functions   
	int getFeet() const      
	{ return feet; }    
	
	int getInches() const      
	{ return inches; }    
	
	// Overloaded operator functions   
	bool operator < (const FeetInches &); // Overloaded +   
	bool operator > (const FeetInches &); // Overloaded -

	friend istream& operator>> (istream&, FeetInches&); 
	friend ostream& operator<< (ostream&, const FeetInches&);
}; 

#endif