//add include statements
#include <iostream>
#include "dna.h"
using namespace std;

//add function(s) code here
int factorial(int num)
{  
    long counter = 1;
    for(int i = 1; i <= num; i++)
    {
        int sum;
        counter *= i;
    }
    return counter;
}
int gcd(int num1,int num2)
{   
    int greatest_cd;
    for(int i = 1; i <= num1 && i <=num2; i++)
    {
        if((num1 % i == 0) && (num2 % i == 0))
        {
            greatest_cd = i;
        }
    }
    return greatest_cd;     
}   


