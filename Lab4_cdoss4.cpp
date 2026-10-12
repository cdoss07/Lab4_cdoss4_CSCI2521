#include<iostream>

using namespace std;

/**
 * Lab4_cdoss.cpp
 * Christian Doss
 * 2026-10-12
 * A program to generate a multiplication table with input validation
 */


int main()
{
	int max_digit = 0;

	cout << "Please enter a maximum digit between 5 and 9 for the mulitplication table" << endl;

	do {
		cout << "Max Digit: ";
		cin >> max_digit;

		if (max_digit <= 4 || max_digit >= 10) {
			cout << "Invalid Input" << endl;	
		}
	} while (max_digit <= 4 || max_digit >= 10);
	
	for (int row = 1; row <= max_digit; ++row) {
		for (int col = 1; col <= max_digit; ++col) {
			cout << (row * col) << "\t";
		}
		cout << endl;
	}

	return 0;
}