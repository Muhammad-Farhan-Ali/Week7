#include<iostream>
#include<string>
using namespace std;

string calculateMoney(int age,int priceMachine,int priceToy);

int main()
{
    int age,priceWashingMachine,priceToy;

    cout<<"Enter Lily's age:";
    cin>>age;
    cout<<"Enter Price of washing machine:";
    cin>>priceWashingMachine;
    cout<<"Enter the unit price of each toy:";
    cin>>priceToy;

    cout<<calculateMoney(age,priceWashingMachine,priceToy);

    return 0;
}
string calculateMoney(int age,int priceMachine,int priceToy)
{
    int toy=0,money=0,cash=0,total=0;

    for(int i=1;i<=age;i++)         // for answer of first condition using lab manual use 
    {                               // i<age in for loop condition
        if(i%2==0)
        {
            money++;
        }
        else
        {
            toy++;
        }
    }
    for(int j=1;j<=money;j++)
    {
        cash=cash+(10*j);
    }
    cash=cash-money;
    total=cash+(toy*priceToy);
    if(total>=priceMachine)
    {
        return "Yes!\n"+to_string(total-priceMachine)+"!";
    }
    else 
    {
        return "No!\n"+to_string(priceMachine-total)+"!";
    }

}