#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=00000;

    cout<<"Enter one number :";
    cin>>f;
    if (f<=99999)
    {
        if (f>=10000)
        {
       a=f%10;
        f=f/10;
        b=f%10;
        f=f/10;
        c=f%10;
        f=f/10;
        d=f%10;
        f=f/10;
        e=f%10;
        }
        else
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    }
    else
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    if(a==e)
    {
        if(b==d)
            cout<<"Yes!";
        else
            cout<<"No!";
    }
    else
        cout<<"No!";



}
