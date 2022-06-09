/* Create a class Employee with appropriate data 
members and functions. The class should also have a 
data member document_verified and function 
verification. This function should initialize the 
value of verification to “completed and genuine”. 
Create appropriate objects and call the functions. 
Make use of public and private access specifier 
wherever required.

*/

#include <iostream>
#include <string.h>
using namespace std;

class employee
{
      private:
      int empid;
      char name[100];
      long int salary;
      char document_verified[100];

      public:
   
      employee()
      {
            strcpy(document_verified,"completed and genuine");

            
      }
      void input()
      {
            cout<<"Enter the Employee Details"<<endl;
            cin>>empid>>name>>salary;
      }
      void display()
      {
            cout<<"Name of the employee: "<<name<<endl;
            cout<<"Employee id : "<<empid<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Verification : "<<document_verified<<endl;
      }
      
      void return_salary(){}
};
int main()
{
      employee emp1,emp2,emp3,emp4,emp5;

      emp1.input();
      emp1.display();

      return 0;
}

