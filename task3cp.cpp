#include <iostream>
using namespace std;

int totalDigits(int num);

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    int result=totalDigits(num);

    cout<<"Total number of digits:"<<result<<endl;

    return 0;
}
int totalDigits(int num)
{
    int count=1;
    if(num<0)
    {
        num=(-num);
    }    
    while(num/10>0)
    {
        num=num/10;
        count++;
    }
    return count;
}