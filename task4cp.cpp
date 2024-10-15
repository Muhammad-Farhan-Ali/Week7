#include<iostream>
using namespace std;

int frequencyChecker(int num,int digit);

int main()
{
    int number,digit;

    cout<<"Enter a number:";
    cin>>number;
    cout<<"Enter the digit to check:";
    cin>>digit;

    cout<<"Frequency:"<<frequencyChecker(number,digit)<<endl;

    return 0;
}
int frequencyChecker(int num,int digit)
{
    int count=0;
    if(num<0)
    {
        num=-num;
    }
    while(num/1>0)
    {
        if(num%10==digit)
        {
            count++;
        }
        num=num/10;
    }
    return count;
}