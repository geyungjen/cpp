#include <iostream>

#include <fstream>

#include <string>

#include <vector>

#include <sstream>

using namespace std;

int main()

{

	//string str = "geeksforgeeks";

	string fileName;

	string str;

	string str2;

	string word;

	int lineCount;

	vector<int> numberOfLines;

	vector<string>search;



	cout << "Enter a file name: ";

	cin >> fileName;

	while (!(fileName.find(".txt") != std::string::npos)) {

		cout << "Not found. ";

		cout << "Enter a file name: ";

		cin >> fileName;

	}

	ifstream myFile;

	myFile.open(fileName);



	cout << "Now enter which word you want to search for ";

	cin >> word;

	lineCount = 0;

	//reverse(str.begin(), str.end());

	while (!(myFile.eof())) {

		while (getline(myFile, str)) {

			reverse(str.begin(), str.end());
			if (str.find(word) != std::string::npos) {
				cout << "Line#: " << lineCount << "-->";
				std::cout << str << '\n';
			}
		lineCount++;
		}

	






	}



	//    myFile.close();

	return 0;

}
