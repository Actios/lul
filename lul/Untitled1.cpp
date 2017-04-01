#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

void AddStudent()
{
	char student[]="";
	cout << "??????? ?????? ????????: ";
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

#include <iostream>
#include <fstream>
#include <cstdio>
#include<cstring>
#include <windows.h>
using namespace std;

void empty_group(char *ch)
 {
 	char buff[20];
 	string bufer;
 	bool p;
 	fstream fin("list_with_groups.txt");
 	fin>>buff;
	while(fin)
 	{		
 		cout<<" buff="<<buff;
		p=true;
 		for(int i=0;i<strlen(buff);i++)
 		if (buff[i]!=ch[i])
		 {
		 	p=false; break;
		  } 
		if (!p)  
		{
			strcat(buff, " ");
			bufer+=buff; 
		}
	fin>>buff;
	 } 
	cout<<"bufer="<<bufer;
	fin.close();
	remove("list_with_groups.txt");
	ofstream f("list_with_groups.txt");
	f<<bufer;
	f.close();
  }
  
void dell_gr()
{
	char name[30];
 	cout<<"Enter the group number: "; cin>>name;
	
        empty_group(name);
		strcat(name, ".txt");
		if( remove(name) == -1 )             
    		cout << "\nError deleting file";
    	else
      		cout << "\nThe file is deleted successfully";
}

struct list
{
 string data;
 int n;
 list *next;	
};
list *head=NULL;


void sort(list *qw)
{
	list *q=qw,*temp;
	string str;
	ofstream f(name);
	
	while (q)
	{	str=q->data;
		list *p=q;
		while (p)
		{
			int k=0;
			if (str[k]>=p->data[k]) 
				if (str[k]==p->data[k]) 
					while(str[k]!='%' && p->data[k]!='%')
					{
						k++;
						if(str[k]!=p->data[k]) 
							if (str[k]>p->data[k]) {str=p->data[k]; temp=p;}
					}
				else 
					str=p->data[k];
			p=p->next;							
		}
		temp->data=q->data;
		q->data=str;
		f<<q->data;
		q=q->next;
	}
}

void buff_text()
{
	char name[20];
	cout<<"Enter the group number: ";
	cin>>name;
	strcat(name, ".txt");
	string str;
	fstream f(name);
	int k=-1;
	
	while(!f.eof())
   {
    getline(f, str);
    list *q=new list;
    q->data=str;
    q->n=k;
    q->next=head;
    head=q;
    k++;
	}
	f.close();
	cout<<"k="<<k<<endl;
	list *q=head;
	while (q)	
	{
		cout<<q->data<<" ";
		q=q->next;
	}
	
	cout<<endl;
	remove(name);
	sort(head);
}

void out(string name)
{
	string nnnn = "registry.txt";
	ofstream nfout(nnnn);
	nfout << name << '\n';
	nfout.close();
}

void make_group()
{
	cout << "Enter the name of group" << endl;
	char name[20], nnn[5] = ".txt";
	cin >> name;
	string nnn1 = nnn, name1 = name, nname = name + nnn1;
	ofstream fout(nname);
	cout << "Enter the data name/id/tel/deads. 1-Continue 0-Stop" << endl;
	string data; int a = 1;
	while (a)
	{
		cin >> data;
		fout << data << '\n';
		cin >> a;
	}
	fout.close();
	out(name1);

}

using namespace std;

void SearchGroup()
{
	int check1 = 1;
	while (check1) {
		cout << "Enter the name of group" << endl;
		string name, group;
		bool check = 0;
		cin >> name;
		ifstream fin("registry.txt");
		while (!fin.eof())
		{
			fin >> group;
			if (group == name) { check = 1; fin.close(); }
		}
		fin.close();
		if (!check) cout << "Group isn't exists"<<endl;
		else
		{
			name = name + ".txt";
			string student;
			ifstream ffin(name);
			while (!ffin.eof())
			{
				ffin >> student;
				cout << student << endl;
			}
			ffin.close();
		}
		cout << "1-Continue 0-Stop";
		cin >> check1;
	}
}

int main()
{
	cout<<"Enter the type of operation: 1 - make group, 2 - delete group, 3 - search and show group,  4 - add student, 5 - transfer student*, 6 - delete student*"<<endl<<"*means that function is unavailable"; 
	int choise=0;
	system("PAUSE");
	return 0;
}
