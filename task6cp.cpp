#include<iostream>
using namespace std;

int HCF(int num1,int num2);
int LCM(int num1,int num2);

int main()
{
    int num1,num2;

    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;

    cout<<HCF(num1,num2)<<endl;
    cout<<LCM(num1,num2)<<endl;

    return 0;
}
int HCF(int num1,int num2)
{
    int hcf;
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int LCM(int num1,int num2)
{
    int lcm=(num1*num2)/(HCF(num1,num2));
}