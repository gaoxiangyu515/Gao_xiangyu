#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout << "Enter sales in dollars (-1 to end):"<<endl ;
    cin>>a;
    while (a>=-1)
    {
        int a=200;
        a=200+a*0.09;
        cout<<"Salary is:"<<a<<endl;
        cout << "Enter sales in dollars (-1 to end):"<<endl ;
    cin>>a;

    }
}
