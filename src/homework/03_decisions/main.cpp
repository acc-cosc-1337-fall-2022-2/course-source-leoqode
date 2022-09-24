//write include statements
#include<iostream>
#include "decisions.h"
using namespace std;

int main() 
{	
	int user_choice;
	cout<<"			MAIN MENU		\n 1-Convert using if \n 2-Convert using switch \n 3-Exit\n\n:";
	cin>>user_choice;
	if(user_choice == 1)
	{
		int manual_user_grade;
		cout<<"Please enter students grade to be converted: ";
		cin>>manual_user_grade;
		cout<<"\n";
		if(manual_user_grade>= 0 && manual_user_grade<=100)
		{
			cout<<"The letter grade from the value you entered, while using if function is: "<<get_letter_grade_using_if(manual_user_grade)<<"\n";
		}
		else
		{
			cout<<"You have entered a grade out of range!\n";
		}
	}
	else if(user_choice == 2)
	{
		int manual_user_grade;
		cout<<"Please enter students grade to be converted: ";
		cin>>manual_user_grade;
		cout<<"\n";
		if(manual_user_grade>= 0 && manual_user_grade<=100)
		{
			cout<<"The letter grade from the value you entered, while using switch function is: "<<get_letter_grade_using_switch(manual_user_grade)<<"\n";
		}
		else
		{
			cout<<"You have entered a grade out of range!\n";
		}		
	}
	else
	{
		cout<<"You have exited, have a great day!\n";
	}
	return 0;
}