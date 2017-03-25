#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void AddStudent()
{
	char student[]="";
	cout << "¬ведите данные студента: ";
	char in_string[500];
	gets_s(in_string);
	cout << in_string;
	ofstream fout("group.txt");
	fout << in_string;
	fout.close();
}

int main()
{
	setlocale(0, "");
	AddStudent();
	system("PAUSE");
	return 0;
}