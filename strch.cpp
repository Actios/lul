#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "strch.cpp"

using namespace std;

void AddElem(string elem, char *f_name)
{
	fstream fin(f_name);
	string str1,bufer=elem+"\n";
	
	while(!fin.eof())
	{
    	getline(fin, str1);
    	bufer+=str1+"\n";
	}	
	fin.close();
	remove(f_name);
	ofstream f(f_name);
	f<<bufer;
	f.close();
}

void DelElem(string elem, char *f_name)
{
	fstream fin(f_name);
	string str1,bufer;
	
	while(!fin.eof())
	{
    	getline(fin, str1);
    	if (str1.find(elem)==-1 ) bufer+=str1+"\n"; 	
	}	
	fin.close();
	remove(f_name);
	ofstream f(f_name);
	f<<bufer;
	f.close();
}

void show(char *f_name)
{
	fstream fin(f_name);
	string str1;
	
	while(!fin.eof())
	{
    	getline(fin, str1);
    	cout<<str1<<endl;	
	}	
	fin.close();
}



/* vse rabotaet (^_^)
int main()
{
	string s1="61.txt";
	cout<<"strch: "<<strch(s1);
//	AddElem("Pupkin",strch(s1));
	//DelElem("popov","61.txt");
	show(strch(s1));
	return 0;
}
*/