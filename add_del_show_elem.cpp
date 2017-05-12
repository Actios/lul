#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include<cstring>
using namespace std;

bool FindStud(string fio, char *f_name) 
{
	ifstream fin(f_name);
	string str1;
	while(!fin.eof())
	{
    	getline(fin, str1);
    	if (!str1.find(fio) ) {fin.close(); return 1; }	
	}
	fin.close();	
	return 0;
}

string SearchStud(string fio, char *f_name) 
{
	ifstream fin(f_name);
	string str1;
	while(!fin.eof())
	{
    	getline(fin, str1);
    	if (!str1.find(fio) ) {fin.close();	return str1; }	
	}
	fin.close();	
	return 0;
}

bool SearchFile(char *f_name)
{
  ifstream fin(f_name); 
    if (fin.is_open()) 
        {
			fin.close ();
    		return 1;
    	}
    fin.close ();	
	return 0;
}





