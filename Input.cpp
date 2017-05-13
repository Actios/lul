#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>
#include "delete_file.cpp"
#include "sortir.cpp"
#include "add_del_show_elem.cpp"
#include "MakeGroup.cpp"
#include "SearchGroup.cpp"
#include "SearchStudent.cpp"
#include "Join groups.cpp"
#include "struct.cpp"
#include "transfer.cpp"
#include "Test join groups.cpp"
#include "TestFunctions1.cpp"

using namespace std;

int main()
{
	char operation[20];
	cout << "Enter the operation (add_student, delete_student, transfer_student, search_student, search_group, show_group, make_group, delete_group, join_groups): ";
	cin >> operation;
	while (operation != "add_student" || operation != "delete_student" || operation != "transfer_student" || operation != "search_student" || operation != "search_group" || operation != "show_group" || operation != "make_group" || operation != "delete_group" || operation != "join_groups")
		cout << "This operation doesn't exist. Please, enter one of the following operations:\nadd_student, delete_student, transfer_student, search_student, search_group, show_group, make_group, delete_group, join_groups";
	if (operation == "add_student")
	{
		char group[20];
		char* info;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		cout << "\nEnter the group: ";
		cin >> group;
		AddElem(group[20], info);

	}
	else if (operation == "delete_student")
	{
		char group[20];
		char* info;
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		DelElem(group[20], info);
	}
	else if (operation == "transfer_student")
	{
		char* info;
		char* group1;
		char* group2;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		cout << "\nEnter the group1: ";
		cin >> group1;
		cout << "\nEnter the group2: ";
		cin >> group2;
		Transfer(info, group1, group2);
	}
	else if (operation == "search_student")
	{
		char info[200];
		cout << "\nEnter the information about student:\n";
		cin >> info;
		Search_student(info[200]);
	}
	else if (operation == "search_group")
	{
		char group[20];
		cout << "\nEnter the group: ";
		cin >> group;
		SearchGroup(group[20]);
	}
	else if (operation == "show_group")
	{
		char* group;
		cout << "\nEnter the group: ";
		cin >> group;
		show(group);
	}
	else if (operation == "make_group")
	{
		char group[20];
		char info[200];
		cout << "\nEnter the group: ";
		cin >> group;
		cout << "\nEnter the information about student:\n";
		cin >> info;
		make_group(group[20], info[200]);
	}
	else if (operation == "delete_group")
	{
		dell_gr();
	}
	else if (operation == "sort_group")
	{
		char* group1;
		char* group2;
		char* newgroup;
		cout << "\nEnter the group1: ";
		cin >> group1;
		cout << "\nEnter the group2: ";
		cin >> group2;
		cout << "\nEnter the newgroup: ";
		JoinGroups(group1, group2, newgroup);
	}
	else if (operation == "join_groups")
	{
		char* group1;
		char* group2;
		char* newgroup;
		cout << "\nEnter the group1: ";
		cin >> group1;
		cout << "\nEnter the group2: ";
		cin >> group2;
		cout << "\nEnter the newgroup: ";
		JoinGroups(group1, group2, newgroup);
	}
	return 0;
}
