/*
Create a class Person which includes: character array name of size 64, age in numeric, character array address of
size 64, and total salary in real numbers (divide salary in different components, if required). 
Make an array of objects of class Person of size 10.
A). Write inline function that obtains the youngest and eldest age of a person from a class person using arrays.
B). Write a program to develop the salary slip and display result by using constructors.
*/

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
      private:
      int emp_id;
      char name[64];
      int age;
      char address[64];
      float base_salary;
      float HA;
      float medicial;
      float special_allowance;
      float gross_sal;
      

      public:

      void person()
      {
            
            HA=5000;
            medicial=15000;
            special_allowance=6000;
      }



      void input()
      {
         cout<<"Enter the Employee_id: ";
         cin>>emp_id;   
         cout<<"Enter the Name: ";
         cin>>name;

         cout<<"Enter the Age: ";
         cin>>age;

         cout<<"Enter the Address: ";
         cin>>address;

         cout<<"Enter the Base Salary:  ";
         cin>>base_salary;

          
      }
      void display()
      {
            cout<<"Emp id: "<<emp_id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
            gross_sal=base_salary+HA+medicial+special_allowance;
            cout<<"Gross Salary: "<<gross_sal<<endl;


      }

};
int main()
{
      int i;
      Person p[10];

      for (i=1;i<=10;i++)
      {
            p[i].input();
      }

      for(i=1;i<=10;i++)
      {
            p[i].display();
      }

      return 0;
    

}

