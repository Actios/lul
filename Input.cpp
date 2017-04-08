#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	string operation;
	cout << "Enter the operation (add, delete_student, delete_group): ";
	cin >> operation;
	if (operation == "add")
	{
		string info;
		string group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		cout << "\nEnter the group: ";
		cin >> group;
		AddElem(string info, string group);

	}
	if (operation == "delete_student")
	{
		string info;
		string group;
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		DelElem(string info, string group);
	}
	return 0;
}