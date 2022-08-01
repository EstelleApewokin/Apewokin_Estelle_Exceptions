//Estelle Apewokin
//July 31, 2022
//CIS 1202 5T1

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

char character(char, int);

int main() {
	char input = 'a';
	int offset = 1;
	
	//try/catch statements to catch the exceptions
	try {
		cout << character(input, offset) << endl; 
	}
	catch (string exception1) { //different type exceptions to indicate which exception is thrown
		cout << exception1;
		cout << "Ending program.\n";
	}
	catch (int exception2) {
		cout << "ERROR: invalid range.\n Ending program.\n";
	}

	offset = -1;

	try {
		cout << character(input, offset) << endl;
	}
	catch (string exception1) {
		cout << exception1;
		cout << "Ending program.\n";
	}
	catch (int exception2) {
		cout << "ERROR: invalid range.\n Ending program.\n";
	}

	input = 'Z';

	try {
		cout << character(input, offset) << endl;
	}
	catch (string exception1) {
		cout << exception1;
		cout << "Ending program.\n";
	}
	catch (int exception2) {
		cout << "ERROR: invalid range.\n Ending program.\n";
	}

	input = '?';
	offset = 5;

	try {
		cout << character(input, offset) << endl;
	}
	catch (string exception1) {
		cout << exception1;
		cout << "Ending program.\n";
	}
	catch (int exception2) {
		cout << "ERROR: invalid range.\n Ending program.\n";
	}

	return 0;
}

char character(char start, int offset) {
	char end;

	if (!isalpha(start)) {
		string invalidCharacterException = "ERROR: invalid character\n"; //string exception
		throw invalidCharacterException;
	}
	
	end = start + offset;

	if (!isalpha(end)) {
		int invalidRangeException = -1; //integer exception
		throw invalidRangeException;
	}

	return end;

}

