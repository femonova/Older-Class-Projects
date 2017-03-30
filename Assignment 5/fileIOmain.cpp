/************************
Name: Olufemi Adeshina

Description: This program aims to count and caluclate the
sum of  the numbers i a file and then print the avg. 

*************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(void) {

	ifstream infile;
	ofstream outfile;
	string name;

	cout << "Please enter filename: " << endl;
	getline(cin, name);
	double number;
	double sum = 0;
	int count = 0;

	infile.open(name);

	while (!infile)
	{
		cout << "File not found. Please reenter filename: " << endl;
		getline(cin, name);

		infile.open(name);
	}

	while (infile >> number) {
		sum += number;
		count++;
	}

	infile.close();


	double avg = sum / count;

	cout << "Sum: " << sum << endl << "Average: " << fixed << setprecision(2)  << avg << endl;
}