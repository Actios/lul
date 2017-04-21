#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
	char operation[20];
	cout << "Enter the operation (add_student, delete_student, show_group, make_group, delete_group, join_groups): ";
	cin >> operation;
	while (operation != "add_student" || operation != "delete_student" || operation != "show_group" || operation != "make_group" || operation != "delete_group")
	cout << "This operation doesn't exist. Please, enter one of the following operations:\nadd_student, delete_student, show_group, make_group, delete_group, join_groups";
	if (operation == "add_student")
	{
		char group[20];
		char info[200];
		cout << "\nEnter the information about student:\n";
		cin >> info;
		cout << "\nEnter the group: ";
		cin >> group;
		AddElem(char group[20], char info[200]);

	}
	else if (operation == "delete_student")
	{
		char group[20];
		char info[200];
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		DelElem(char group[20], char info[200]);
	}
	else if (operation == "show_group")
	{
		char group[20];
		cout << "\nEnter the group: ";
		cin >> group;
		show(char group[20]);
	}
	else if (operation == "make_group")
	{
		char group[20];
		char info[200];
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		make_group(char group[20], char info[200]);
	}
	else if (operation == "delete_group")
	{
		char group[20];
		cout << "\nEnter the group: ";
		cin >> group;
		dell_gr(char group[20]);
	}
	else if (operation == "join_groups")
	{
		char group1[20];
		char group2[20];
		cout << "\nEnter the group1: ";
		cin >> group1;
		cout << "\nEnter the group2: ";
		cin >> group2;
		JoinGroups(char group1[20], char group2[20], char newgroup[20]);
	}
	return 0;
}
