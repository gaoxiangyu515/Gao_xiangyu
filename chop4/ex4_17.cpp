#include <iostream>

using namespace std;

int main()
{
     int a = 0;
   int b;
   int c;

   cout << "Enter the first number: ";
   cin >> c;

   while ( ++a < 10 )
   {
      cout << "Enter the next number : ";
      cin >>b;
      if ( b > c )
         c = b;
   }

   cout << "Largest is :" << c << endl;
}
