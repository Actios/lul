#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

void Search_student(string parameter)
{
	string group = "12";
	string groupfile;
	groupfile+= ".txt";

	ifstream fin(groupfile);
	string data;

	while (!fin.eof())
	{
		getline(fin, data);
		string surname, name, fathername, id, group;
		int count = 0, check = 0, index = 0;
		while (count < 3)
		{
			if (data[index] == '%') count++;
			index++;
		}
		while (data[index] != '%')
			id += data[index];
		if (id == parameter)
			cout << data;

	}
	fin.close();

}

int main()
{
	string parameter;
	parameter = "02281488";
	Search_student(parameter);
	system("pause");
	return 0;
}