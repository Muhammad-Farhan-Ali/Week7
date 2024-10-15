#include<iostream>
#include<string>
using namespace std;

string calculatePrice(int money,int year);

int main()
{
    int money,year;

    cout<<"Enter Money:";
    cin>>money;
    cout<<"Enter Year:";
    cin>>year;

    cout<<calculatePrice(money,year)<<endl;

    return 0;
}
string calculatePrice(int money,int year)
{
    int expenditure=0,total=0;
    for(int i=1800;i<=year;i++)
    {
        if(i%2==0)
        {
            expenditure=12000;
        }
        else
        {
            expenditure=(12000+(50*(18+(year-1800)-1)));    // for answer according to lab manual use -4 instead of -1
        }
        total=total+expenditure;
    }
    if(total<=money)
    {
    return "Yes! He will live a carefree life and will have "+to_string(money-total)+" dollars left!";
    }
    else 
    {
    return "No! He will need "+to_string(total-money)+" dollars more to survive!";
    }
}