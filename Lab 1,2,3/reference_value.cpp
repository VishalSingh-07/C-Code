//  WAP to demonstrate the effect of call of value and call by reference in functions.
#include<iostream>
using namespace std;

void swap_by_value(int x, int y)
{
      int temp;
      temp=x;
      x=y;
      y=temp;
}     

void swap_by_refernce(int &x, int &y)
{
      int temp;
      temp=x;
      x=y;
      y=temp;
}

int main()
{

      int a,b,c,d;
      cout<<"Enter value of a and b: ";
      cin>>a>>b;
      swap_by_value(a,b);
      cout<<"\nAfter swap by call by value a="<<a<<" b="<<b;
      
      cout<<"\n\nEnter value of c and d: ";
      cin>>c>>d;
      swap_by_refernce(c,d);
      cout<<"\nAfter swap by call by value c="<<c<<" d="<<d;
      
      return 0;
}

