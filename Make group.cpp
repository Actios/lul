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