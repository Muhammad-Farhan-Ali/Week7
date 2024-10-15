#include<iostream>
using namespace std;

void generateFabonacci(int length);

int main()
{
    int length;

    cout<<"Enter length of Fabonacci Series:";
    cin>>length;
    generateFabonacci(length);

    return 0;
}
void generateFabonacci(int length)
{
    int n1=0,n2=1,result=0;
    for(int i=1;i<=length;i++)
    {
        result=n1;
        n1=n2;
        n2=result+n2;
        cout<<result<<", ";
    }
}