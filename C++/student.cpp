#include <iostream>
using namespace std;

class student
{
      private:
      char name[20];
      int roll_no;
      float marks;
      char section[12];
      int fee_paid;

      public:
      void input()
      {
            cin>>name>>roll_no>>marks>>section;
      }
      
      void display()
      {

            cout<<"Name : "<<name<<endl;
            cout<<"Roll_no : "<<roll_no<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<"Section: "<<section<<endl;
      }
      void initialize()
      {
            fee_paid=150000;
            cout<<fee_paid;
      }
      
};
int main()
{
      student s1,s2;
      
      cout<<"Enter the details in order of (Name, roll number, marks, section)"<<endl;
      s1.input();
      s1.display();
      s1.initialize();


      s2.input();
      s2.display();
      s2.initialize();


      return 0;
}