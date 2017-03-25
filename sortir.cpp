#include <iostream>
#include <fstream>
#include <cstdio>
#include<cstring>
#include <windows.h>
using namespace std;

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
