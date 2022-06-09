/*
Write a program to find the area of circle and cylinder by
virtual function runtime polymorphism overloading concept.
*/
// WAP to demonstrate an example of virtual function.
#include <iostream>
using namespace std;

class circle
{
      protected:
      float radius;
      public:
      circle(float r)
      {
            radius=r;
      }
      virtual float area()
      {
            float a;
            a=3.14*radius*radius;
            return a;
      }
};
class cylinder:public circle
{
      private:
      float height;
      public:
      cylinder(float r, float h):circle(r)
      {
            height=h;
            
      }
      float area()
      {
            float a;
            a=2*3.14*radius*radius;
            return a;
      }


};
int main()
{
      circle *ptr;
      circle obj1(8);
      cylinder obj2(8,4);

      ptr=&obj1;
      cout<<"Area of Circle: "<<ptr->area()<<endl;

      ptr=&obj2;
      cout<<"Area of Cylinder: "<<ptr->area()<<endl;

      return 0;
}