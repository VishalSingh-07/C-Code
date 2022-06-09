// WAP to implement overloading a volume function.
#include <iostream>
using namespace std;
class calculation
{
      public:
      int volume(int x)
      {
            return x*x*x;
      }
      int volume(int rc,int h)
      {
            return (3.14*rc*rc*h);
      }
      double volume(double r)
      {
            return ((4*3.14*r*r*r)/3);
      }
};
int main()
{
      calculation c1;

      int x,rc,h;
      double r;
      cout<<"Enter the side of a cube: ";
      cin>>x;
      cout<<"Enter the radius of cylinder: ";
      cin>>rc;
      cout<<"Enter the height of cylinder: ";
      cin>>h;
      cout<<"Enter the radius of sphere: ";
      cin>>r;

      cout<<"The Volume of cube is : "<<c1.volume(x)<<endl;
      cout<<"The Volume of cylinder is: "<<c1.volume(rc,h)<<endl;
      cout<<"The Volume of sphere is: "<<c1.volume(r)<<endl;

      return 0;
}