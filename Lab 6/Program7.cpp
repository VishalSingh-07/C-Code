// Write a C++ program to demonstrate example of multiple inheritance.
#include <iostream>
using namespace std;
class student // first base class
{
      protected:
      int roll_no;
      char name[20];

      public:
      void get()
      {
            cout<<"Enter the roll Number: ";
            cin>>roll_no;
            cout<<"Enter the Name: ";
            cin>>name;
      }
      void display()
      {
            cout<<"Roll Number : "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
      }

};
class marks // second base class
{
      protected:
      int m1,m2,m3,m4,m5;
      public:
      void mark()
      {
            cout<<"Enter the marks of physics: ";
            cin>>m1;

            cout<<"Enter the marks of mathematics: ";
            cin>>m2;

            cout<<"Enter the marks of chemistry: ";
            cin>>m3;
            
            cout<<"Enter the marks of english: ";
            cin>>m4;
            
            cout<<"Enter the marks of computer science: ";
            cin>>m5;
            
            
      }
};


class result: public student,public marks
{
      private:
      int total;
      public:
      void calculate()
      {
            total=m1+m2+m3+m4+m5;
            cout<<"Total Marks of Student is : "<<total<<endl;
      }



};

int main()
{
      result r;
      r.get();
      r.mark();
      r.display();
      r.calculate();
}
