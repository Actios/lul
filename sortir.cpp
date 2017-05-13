char *strch(string str)
{
	
	int n=str.length();
	char *ch=new char[n];
	for (int i=0; i<n+1; i++)
		ch[i]=str[i];
	return ch;

}
