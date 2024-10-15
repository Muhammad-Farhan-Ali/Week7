#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0;

    while(num>=0)
    {
        cout<<"Enter a number:";
        cin>>num;
        sum=sum+num;
    }
    cout<<"Sum:"<<sum<<endl;

    return 0;
}