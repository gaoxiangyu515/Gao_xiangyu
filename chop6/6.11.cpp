#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    a=fabs(7.5);
    cout<<"a) :"<<a<<endl;
    b=floor(7.5);
    cout<<"b) :"<<b<<endl;
    c=fabs(0.0);
    cout<<"c) :"<<c<<endl;
    d=ceil(0.0);
    cout<<"d) :"<<d<<endl;
    e=fabs(-6.4);
    cout<<"e) :"<<e<<endl;
    f=ceil(-6.4);
    cout<<"f) :"<<f<<endl;
    g=ceil(-fabs(-8+floor(-5.5)));
    cout<<"g) :"<<g<<endl;
}
