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


