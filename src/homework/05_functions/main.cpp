
#include <iostream>
#include "func.h"
using namespace std;

int main() 
{
	string dna_string;
	int user_menu_select;
	cout<<"1 - GET GC CONTENT\n2 - GET DNA COMPLIMENT\n3 - EXIT\n";
	cout<<"user selection: ";
	cin>>user_menu_select;
	
	do
	{
		if(user_menu_select == 1)
		{
			cout<<"You have chosen GET GC CONTENT!"<<endl;
			cout<<"Please enter the DNA string in which you want to get GC content from: "<<endl;
			cout<<"user selection: ";
			cin>>dna_string;
			cout<<"The GC content from the DNA string \""<<dna_string<<"\" is "<< get_gc_content(dna_string); 
			
		}
		else if(user_menu_select == 2)
		{
			cout<<"You have chosen GET DNA COMPLIMENT!"<<endl;
			cout<<"Please enter the DNA string in which you want to get the DNA compliment from: "<< endl;
			cout<<"user selection: ";
			cin>>dna_string;
			cout<<"The DNA compliment from the DNA string \""<<dna_string<<"\" is "<< get_dna_complement(dna_string);
			
		}
		else if(user_menu_select == 3)
		{
			break;
		}
		cout<<"\n1 - GET GC CONTENT\n2 - GET DNA COMPLIMENT\n3 - EXIT\n";
		cout<<"user selection: ";
		cin>>user_menu_select;
	}
	while(user_menu_select != 3);
	
}