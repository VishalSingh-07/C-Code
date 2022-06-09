/*
Define a class Shape whose attributes are radius, length and width calculate the perimeter of the rectangle and circle.
Use constructors and destructors.

*/
#include <iostream>
using namespace std;

class Shape
{
      private:
      float radius;
      int length;
      int width;
      float pie;
      long int perimeter_of_rectangle;
      long int perimeter_of_circle;

      public:
      
      Shape(int l,int w)
      {
            
            length=l;
            width=w;
            

            
      }
      Shape(float r)
      {
            pie=3.14;
            radius=r;
      }
      void calculate_circle()
      {
            
            perimeter_of_circle=pie*radius*radius;

      }
      void calculate_rectangle()
      {
            perimeter_of_rectangle=2*(length+width);

      }

      void display_circle()
      {
            cout<<"Perimeter of Circle: "<<perimeter_of_circle<<endl;

      }
       
      void display_rectangle()
      {
            cout<<"Perimeter of Rectangle: "<<perimeter_of_rectangle<<endl;
            
          
      }
      
      

};

int main()
{
      Shape s1(4,12),s2(12,14),s3(4);

      cout<<"For First Shape"<<endl;
      s1.calculate_rectangle();
      s1.display_rectangle();
      
      cout<<"For Second Shape"<<endl;
      s2.calculate_rectangle();
      s2.display_rectangle();


      cout<<"For Third Shape"<<endl;
      s3.calculate_circle();
      s3.display_circle();




      return 0;

}

