void Transfer(string fio, char *out_name,char *in_name)
{
	if (FindStud(fio,out_name)) DelElem(SearchStud(fio,out_name),out_name); 
	else cout<<"Student no";
	if (FindStud(fio,in_name)) AddElem(SearchStud(fio,in_name),in_name); 
	else cout<<"students has existed";
}
