#include <iostream>

using namespace std;

float amount(float principle, int period, float rate=0.21);
int main()
{

      amount(5000.00,5);
      
}

float amount(float p, int x, float r)
{
      float c;
      c=p+x+r;
      cout<<"The value of c is "<<c;
      return 0;
}