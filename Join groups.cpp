void JoinGroups(char group1[20], char group2[20], char newgroup[20])
{
	ifstream fin1(group1);
	ifstream fin2(group2);
	ofstream fout(newgroup, ios_base::ate);
	while (fin1)
	{
		const int max_length1 = 1024;
		char str1[max_length1];
		fin1.getline(str1, max_length1);
		fout << str1;
	}
	while (fin2)
	{
		const int max_length2 = 1024;
		char str2[max_length2];
		fin2.getline(str2, max_length2);
		fout << str2;
	}
}