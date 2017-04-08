#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

void make_group(string data, string group)
{
	string grouptxt = group + ".txt";
	ofstream fout(grouptxt);
	fout << data << '\n';
	fout.close();
	string registry = "registry.txt";
	ofstream nfout(registry);
	nfout << group << '\n';
	nfout.close();
}


int main()
{
	make_group();
	system("PAUSE");
	return 0;
}