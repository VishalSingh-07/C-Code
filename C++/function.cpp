#include <iostream>

using namespace std;
long int factorial(int);
int main()

{
      int x,d;
      cout<<"Enter the Number: ";
      cin>>x;

      d=factorial(x);

      cout<<"The Factorial of the " <<x<<" is "<<d;

      return 0;
}

long  int factorial(int n)
{
      int i,f=1;
      for(i=1;i<=n;i++)
      {
            f=f*i;
      }
      return f;
}