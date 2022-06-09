//WAP to demonstrate an example of unary operator overloading using friend’s function.
#include <iostream>
using namespace std;

class number
{
      int num;
      public:
      number()
      {
            num=1;
      }
      number(int x)
      {
            num=x;
      }
      friend void operator ++(number &obj);
      friend void operator --(number &obj);
};
void operator ++(number&obj)
{
      obj.num=obj.num+2;
      cout<<"Increment number is : "<<obj.num<<endl;
}
void operator --(number&obj)
{
      obj.num=obj.num-2;
      cout<<"Decrement number is: "<<obj.num<<endl;
}
int main()
{
      number obj1(5),obj2(2);
      ++obj1;
      --obj2;

      return 0;
}