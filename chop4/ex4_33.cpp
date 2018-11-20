#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    double d=0;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    if(a<b)
    {
        d=a;
        a=b;
        b=d;
    }
    if(a<c)
    {
        d=a;
        a=c;
        c=d;
    }
    if (b*b+c*c-a*a==0)
        cout<<"OK!"<<endl;
    else
        cout<<"NO!"<<endl;

}
