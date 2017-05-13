void TestJoinGroups()
{
	char testgroup1[20] = "1.txt";
	char testgroup2[20] = "61.txt";
	char testnewgroup[20] = "61new.txt";
	ifstream fin1(testgroup1);
	ifstream fin2(testgroup2);
	ofstream fout(testnewgroup, ios_base::ate);
	if (!fin1.is_open() && !fin2.is_open())
		cout << "Testing failed!";
	else
	{
		const int max_length1 = 1024;
		char str1[max_length1];
		fin1.getline(str1, max_length1);
		fout << str1;
		const int max_length2 = 1024;
		char str2[max_length2];
		fin2.getline(str2, max_length2);
		fout << str2;
		cout << "Testing succeeded!";
	}
}
