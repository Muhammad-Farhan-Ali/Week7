#include<iostream>
using namespace std;

int showSum();

int main()
{
    int sum=showSum();
    cout<<"Sum:"<<sum<<endl;
    return 0;
}
int showSum()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    return sum;
}