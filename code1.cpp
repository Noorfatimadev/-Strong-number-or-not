
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;


   cout<<"Enter any number to check Strong number: ";
    cin>>num;


    originalNum = num;

    sum = 0;

  
    while(num > 0)
    {

        lastDigit = num % 10;

       
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if(sum == originalNum)
    {
       cout<<"%d is STRONG NUMBER"<<originalNum;
    }
    else
    {
       cout<<"%d is NOT STRONG NUMBER"<<originalNum;
    }

    return 0;
}
