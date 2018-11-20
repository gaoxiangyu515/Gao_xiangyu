#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Enter the third number :";
    cin>>c;
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
                cout<<"OK!"<<endl;
            else
                cout<<"NO!"<<endl;
        }
        else
            cout<<"NO!"<<endl;
    }
    else
        cout<<"NO!"<<endl;
}
