// FileIO.cpp : Defines the entry point for the console application.
//

/*

FileIO.cpp

Author: Alex Ly 

This program takes a line of text and is passed by reference to a funnction
that will determine if it was written to a .txt file
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool writeString(string &phrase);

int main() {
	string phrase = "";
	cout << "Enter a phrase" << endl;
	getline(std::cin, phrase);
	writeString(phrase);
	return 0;
}

/*
writeString

This function will take the phrase the user inputted (call by reference) and
determines if the phrase can be written to the .txt file specified

@param phrase, the phrase the user inputted

@return false, if the phrase can't be written onto the .txt file
@return true, if the phrase can be written onto the .txt file
*/
bool writeString(string &phrase) {
	ofstream outFile("user.txt");
	if (outFile.fail()) {//if the phrase can't be written on the .txt file
		return false;
	}
	else {
		outFile << phrase << endl;
		outFile.close();
		return true;
	}

}
