//Estelle Apewokin
//July 31, 2022
//CIS 1202 5T1

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

char character(char, int);


int main() {
	char input = 'C';
	int offset = 3;
	
	try {
		cout << character(input, offset);
	}
	catch (string) {

	}
	return 0;

}

char character(char start, int offset) {
	char end;

	if (!isalpha(start)) {
		string invalidCharacterException = "ERROR: starting letter is not a letter A-Z.\n";
		throw invalidCharacterException;
	}
	
	end = start + offset;

	if (!isalpha(end)) {
		string invalidRangeException = "ERROR: target letter is not a letter A-Z.\n";
		throw invalidRangeException;
	}

	return end;

}

