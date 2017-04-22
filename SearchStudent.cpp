void Search_student(string parameter)
{
	string group;
	bool check = 0;
	ifstream f("registry.txt");
	while (!f.eof())
	{
		f >> group;
		string groupfile;
		groupfile = group + ".txt";
		string data;

		ifstream fin(groupfile);

		while (!fin.eof())
		{
			getline(fin, data);
			if (data != "")
			{
				string surname, name, fathername, id;
				int count = 0, index = 0;
				while (count < 4)
				{
					if (data[index] == '%')
					{
						count++; index++;
					}
					while (data[index] != '%')
					{
						if (count == 0) surname += data[index];
						else if (count == 1) name += data[index];
						else if (count == 2) fathername += data[index];
						else if (count == 3) id += data[index];
						index++;
					}

				}
				if (id == parameter || parameter == name || parameter == surname || parameter == fathername)
				{
					cout << " Student exists:" << endl;
					cout << surname << ' ' << name << ' ' << fathername << ' ' << id << ' ' << group << endl;
					check = 1;
				}
			}
		}
		fin.close();
	}
	f.close();
	if (!check) cout << "Student isn't exists";
}
