#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "add_del_show_elem.cpp"
#include "find.cpp"
#include "strch.cpp"

using namespace std;
/*
void Transfer(string fio, char *out_name,char *in_name)
{
	if (FindStud(fio,out_name)) DelElem(SearchStud(fio,out_name),out_name); 
	else cout<<"Student no";
	if (FindStud(fio,in_name)) AddElem(SearchStud(fio,in_name),in_name); 
	else cout<<"students has existed";
}
*/

int main()
{
	string s1="61.txt", s2="62.txt";
	cout<<"str1= "<<strch(s1)<<"str2= "<<strch(s2);
	//Transfer("popov",strch(s1),strch(s2));
	return 0;
}
