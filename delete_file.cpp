void empty_group(char *ch)
 {
 	char buff[20];
 	string bufer;
 	bool p;
 	fstream fin("list_with_groups.txt");
 	fin>>buff;
	while(fin)
 	{		
 		cout<<" buff="<<buff;
		p=true;
 		for(int i=0;i<strlen(buff);i++)
 		if (buff[i]!=ch[i])
		 {
		 	p=false; break;
		  } 
		if (!p)  
		{
			strcat(buff, " ");
			bufer+=buff; 
		}
	fin>>buff;
	 } 
	cout<<"bufer="<<bufer;
	fin.close();
	remove("list_with_groups.txt");
	ofstream f("list_with_groups.txt");
	f<<bufer;
	f.close();
  }
  
void dell_gr()
{
	char name[30];
 	cout<<"Enter the group number: "; cin>>name;
	
        empty_group(name);
		strcat(name, ".txt");
		if( remove(name) == -1 )             
    		cout << "\nError deleting file";
    	else
      		cout << "\nThe file is deleted successfully";
}
