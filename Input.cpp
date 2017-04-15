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
	cout << "Enter the operation (add_student, delete_student, show_group, make_group, delete_group): ";
	cin >> operation;
	while (operation != "add_student" || operation != "delete_student" || operation != "show_group" || operation != "make_group" || operation != "delete_group")
	cout << "This operation doesn't exist. Please, enter one of the following operations:\nadd_student, delete_student, show_group, make_group, delete_group";
	if (operation == "add_student")
	{
		string group;
		string info;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		cout << "\nEnter the group: ";
		cin >> group;
		AddElem(string group, string info);

	}
	else if (operation == "delete_student")
	{
		string group;
		string info;
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		DelElem(string group, string info);
	}
	else if (operation == "show_group")
	{
		string group;
		cout << "\nEnter the group: ";
		cin >> group;
		show(string group);
	}
	else if (operation == "make_group")
	{
		string group;
		string info;
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		make_group(string group, string info);
	}
	else if (operation == "delete_group")
	{
		string group;
		cout << "\nEnter the group: ";
		cin >> group;
		dell_gr(string group);
	}
	return 0;
}
