#include<iostream>
using namespace std;

int digitSum(int num);

int main()
{
    int num;

    cout<<"Enter number:";
    cin>>num;

    cout<<"Sum of digits:"<<digitSum(num)<<endl;

    return 0;
}
int digitSum(int num)
{
    int sum=0;
    int digit;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    return sum;
}