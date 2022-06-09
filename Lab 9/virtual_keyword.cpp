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
      cylinder(float r,float h):circle(r)
      {
            height=h;
      }
      float area()
      {
            float area;
            area=2*3.14*radius*radius;
            return area;
      }


};
int main()
{
      circle *ptr;
      circle circleobj(8);
      cylinder cylinderobj(8,4);
      ptr=&circleobj;
      cout<<"Area of Circle: "<<ptr->area()<<endl;
      ptr=&cylinderobj;
      cout<<"Area of Cylinder: "<<ptr->area()<<endl;

      return 0;


}