void testSearchGroup()
{
	ifstream fin("")
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


}