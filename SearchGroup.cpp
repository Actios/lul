void SearchGroup(string name)
{
		string group;
		bool check = 0;
		cin >> name;
		ifstream fin("registry.txt");
		while (!fin.eof())
		{
			fin >> group;
			if (group == name) { check = 1; fin.close(); }
		}
		fin.close();
		if (!check) cout << "Group isn't exists" << endl;
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
}
