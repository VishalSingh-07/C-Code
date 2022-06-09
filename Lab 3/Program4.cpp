// WAP using an inline function that obtains the largest of the three numbers.
#include <iostream>
using namespace std;
inline void large(int a,int b,int c)
{
      if(a>b && a>c)
      {
           cout<<"\n Largest Number is: "<<a;
      }
      else if(b>c)
      {
           cout<<"\n Largest Number is: "<<b;
      }
      else
      {
            cout<<"\n Largest Number is: "<<c;
      } 
}
int main()
{
      int a,b,c;
      cout<<"Largest among three numbers using inline function"<<endl;
      cout<<"Enter the value of a: ";
      cin>>a;
      cout<<"Enter the value of b: ";
      cin>>b;
      cout<<"Enter the value of c: ";
      cin>>c;
      large(a,b,c);
      return 0;
}