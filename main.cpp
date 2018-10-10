// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 5
// Program: CS213-2018-A1-T1-P1
// Purpose: this program help to split strings
// Author: nada abdelrahman mabrouk 20170315
// Date:    10 october 2018
// Version: 2.0
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string>split(string, string);

int main()
{
vector<string> NewStr;
string data;
string delimiter;

cout << "Enter string to split:" << endl;
getline(cin,data);//It is used to input a string from user.

cout << "Enter delimiter string:" << endl;
getline(cin,delimiter);//It is used to input a delimiter string.

NewStr = split(data,delimiter);
cout << "\n";
cout << "The substrings are: ";

for(int i = 0; i < NewStr.size(); i++)//for loop to show the new strings
cout << "\"" << NewStr[i] << "\"" << ",";
cout << endl << endl;
return 0;
}

vector <string>split(string line, string delimiter)
{
int first = 0;
int last;
vector<string> subStr;
while((last = line.find(delimiter, first)))
{
subStr.push_back(line.substr(first, last-first));
first = last + delimiter.length();
}
subStr.push_back(line.substr(first));
return subStr;
}

