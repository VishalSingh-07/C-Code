// Write a C++ Program to read and print student's information using two classes and simple inheritance
#include <iostream>
using namespace std;
class student
{
      protected:
      int rollnumber;
      char name[20];
      int marks;
      int age;

      public:
      void input()
      {
            cout<<"Enter the Roll Number: ";
            cin>>rollnumber;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the Marks: ";
            cin>>marks;
            cout<<"Enter the Age: ";
            cin>>age;
      }

};
class school: public student
{
      public:
      void display()
      {
            cout<<"Information: "<<endl;
            cout<<"Roll Number: "<<rollnumber<<endl;
            cout<<"Name : "<<name<<endl;    
            cout<<"Marks: "<<marks<<endl;
            cout<<"Age: "<<age<<endl;
        
      }

}; 
int main()
{
      school s1,s2;
      cout<<"Student 1: "<<endl;
      s1.input();
      s1.display();
      cout<<"Student 2: "<<endl;
      s2.input();
      s2.display();
      return 0;
}