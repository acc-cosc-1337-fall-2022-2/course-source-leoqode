//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout

using namespace std;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	

	double meal_amount,tip_rate,tip_amount,tax_amount,total;

	cout<<"Meal Amount: ";
	cin>>meal_amount;
	cout<<"\n";

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Tip Rate: ";
	cin>>tip_rate;
	cout<<"\n";

	tip_amount = get_tip_amount(meal_amount,tip_rate);

	total = tip_amount + meal_amount + tax_amount;

	cout<<"RECIEPT"<<"\n\n";
	cout<<"Tip Amount: "<<tip_amount<<endl;
	cout<<"Meal Amount: "<<meal_amount<<endl;
	cout<<"Tax Amount: "<<tax_amount<<endl;
	cout<<"Total: "<<total<<endl;
}
