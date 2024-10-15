#include<iostream>
using namespace std;

int main()
{
    char choice ='Y';
    while(choice!='N' && choice!='n')
    {
        cout<<"I am Happy!"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
    }
    return 0;
}