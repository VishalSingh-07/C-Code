//WAP to demonstrate an example of binary operator overloading.
#include <iostream>
using namespace std;
class complex
{
      private:
      int real;
      int img;

      public:
      void getvalue()
      {
            cout<<"Enter the value of real number: ";
            cin>>real;
            cout<<"Enter the value of imaginary number: ";
            cin>>img;
      }
      complex operator+(complex obj)
      {
            complex temp;
            temp.real=real+obj.real;
            temp.img=img+obj.img;
            return temp;
      }
      complex operator-(complex obj)
      {
            complex temp1;
            temp1.real=real-obj.real;
            temp1.img=img-obj.img;
            return temp1;
      }

      void display()
      {
            cout<<real<<"(+)"<<img<<"i"<<endl;
      }

};
int main()
{
      complex c1,c2,c3,c4;
      cout<<"For first Complex number: "<<endl;
      c1.getvalue();
      cout<<"For Second Complex number: "<<endl;
      c2.getvalue();

      c3=c1+c2;
      c4=c1-c2;

      cout<<"Result:"<<endl;
      cout<<"Sum is : ";
      c3.display();
      cout<<endl<<"Subtraction is: ";
      c4.display();

      return 0;
}