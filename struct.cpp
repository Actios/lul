#include <iostream>
#include <fstream>
#include <cstdio>
#include<cstring>
#include <windows.h>

using namespace std;

struct stud
{
	char fio[50];
	int kurs;
	int group;
	int id_number;
};

int main() 
{
	int n;
	
	char name[20];
	
	cout<<"Input the file name: "; cin>>name;
	strcat(name, ".txt");
	cout<<"Input count students: "; cin>>n;
	ofstream f(name);
	stud *a=new stud[n];
	for (int i=0; i<n; i++)
	{
		cin>>a[i].fio;
		f<<a[i].fio<<"/";
		cin>>a[i].group;
		f<<a[i].group<<"/";
		cin>>a[i].id_number;
		f<<a[i].id_number<<"/";
		cin>>a[i].kurs;
		f<<a[i].kurs;
		f<<endl;
		
	}
	
	
	return 0;
}
