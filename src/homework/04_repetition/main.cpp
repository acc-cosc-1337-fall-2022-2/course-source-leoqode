//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using namespace std;

//write main program
int main()
{
	
	int user_choice;
	
	do
	{
		cout<<"MENU\n1 - Execute Factorial Program \n2 - Execute Greatest Common Divisor\n3 - Exit\n";
		cin>>user_choice;
		if(user_choice == 1)
		{
			int num;
			cout<<"You have chosen factorial!\n\nPlease enter the number you want to complete this operation with: ";
			cin>>num;
			cout<<"The factorial result of "<<num<<" is "<<factorial(num)<<"\n";
			
		}
		else if(user_choice == 2)
		{
			int num1;
			int num2;
			cout<<"You have chosen Greatest Common Divisor!\n\nPlease enter the numbers you want to complete this operation with: \n";
			cout<<"num1: \n";
			cin>>num1;
			cout<<"num2: ";
			cin>>num2;
			cout<<"The Greatest Common Divisor of "<<num1<<" & "<<num2<<" is: "<<gcd(num1,num2)<<"\n";
		
		}
	
	}
	while(user_choice != 3);
}