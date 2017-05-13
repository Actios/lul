void AddElem(string elem, char f_name[20])
 {
	fstream fin(f_name);
	string str1, bufer = elem + "\n";
	
		while (!fin.eof())
		 {
		getline(fin, str1);
		bufer += str1 + "\n";
		}
	fin.close();
	remove(f_name);
	ofstream f(f_name);
	f << bufer;
	f.close();
	}

void DelElem(string elem, char f_name[20])
 {
	fstream fin(f_name);
	string str1, bufer;
	
		while (!fin.eof())
		 {
		getline(fin, str1);
		if (str1.find(elem) == -1) bufer += str1 + "\n";
		}
	fin.close();
	remove(f_name);
	ofstream f(f_name);
	f << bufer;
	f.close();
	}

void show(char f_name[20])
 {
	fstream fin(f_name);
	string str1;
	
		while (!fin.eof())
		 {
		getline(fin, str1);
		cout << str1 << endl;
		}
	fin.close();
	}
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
