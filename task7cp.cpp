#include<iostream>
#include<iomanip>
using namespace std;

void percentage(int num);

int main()
{
    int num;

    cout<<"Enter numbers to count:";
    cin>>num;
    percentage(num);

    return 0;
}
void percentage(int num)
{
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    int value;
    for(int i=1;i<=num;i++)
    {
        cin>>value;
        if(value>=1 && value<=199)
        {
            p1++;
        }
        else if(value>=200 && value<=399)
        {
            p2++;
        }
        else if(value>=400 && value<=599)
        {
            p3++;
        }
        else if(value>=600 && value<=799)
        {
            p4++;
        }
        else if(value>=800 && value<=1000)
        {
            p5++;
        }
    }
    cout<<fixed<<setprecision(2)<<((p1/num)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((p2/num)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((p3/num)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((p4/num)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((p5/num)*100.0)<<"%"<<endl;
    
}