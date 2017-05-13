void testSearchStudent()

{
	
        string testname = "testgroup.txt";

	string surname = "123", name = "234", fathername = "345", id = "456";
	ofstream fout(testname);

	fout << surname << '%' << name << '%' << fathername << '%' << id << '%' << endl;
	fout <<  name << '%' << fathername << '%' << id << '%' << surname << '%' << endl;

	fout.close();


	ofstream nfout("registry.txt");
	nfout << "testgroup" << '\n';
	
        nfout.close();



        if (Search_student(surname) == 1) cout << "It works";

	if (Search_student(name) == 1) cout << "It works";

	if (Search_student(fathername) == 1) cout << "It works";

	if (Search_student(id) == 1) cout << "It works";



	char testn[15] = "testgroup.txt";
	
        remove(testn);

}




bool Compare(char *first, char *second)

{

  int index = 0, scount=0;

    while (first[index] || second[index]) 
	
       {
if (first[index] == second[index]) scount++;
	
	index++;
	
       }
	
  if (index == scount) return 1;
	
  return 0;

}



void SearchGroup(char *name)
{
	char group[20];
	bool check = 0;
	ifstream fin("registry.txt");
	while (!fin.eof())
	{
		fin >> group;
		if (Compare(group, name)==1) { check = 1; fin.close(); }
	}
	fin.close();
	if (!check) cout << "Group isn't exists" << endl;
	else
	{
		string nname = name;
		nname+= ".txt";
		string student;
		ifstream ffin(nname);
		while (!ffin.eof())
		{
			ffin >> student;
			cout << student << endl;
		}
		ffin.close();
	}
}



void TestSearchGroup()

{
	
ofstream fout("228.txt");
	
fout << "Function_works" << endl;
	
fout.close();
	
ofstream nfout("registry.txt");

	nfout << "228" << endl;

	nfout.close();

	SearchGroup("228");

	remove("228.txt");

}
