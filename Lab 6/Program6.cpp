// Write a C++ program to read and print employee information using multiple inheritance
#include <iostream>
using namespace std;
class employee // first base class
{
      protected:
      int employee_id;
      char employee_name[25];
      int department_no;
      int salary;



      public:
      void get()
      {
            cout<<"Enter the Employee Id: ";
            cin>>employee_id;
            cout<<"Enter the Employee Name: ";
            cin>>employee_name;
            cout<<"Enter the Department number: ";
            cin>>department_no;
            cout<<"Enter the salary: ";
            cin>>salary;
      }
     
};
class employee_personal
{
      protected:
      int age;
      char gender[8];
      char marital_status[25];

      public:

      void personal()
      {
            cout<<"Enter the age: ";
            cin>>age;
            cout<<"Enter the gender: ";
            cin>>gender;
            cout<<"Enter the martial status: ";
            cin>>marital_status;
      } 

};
class display:public employee ,public employee_personal
{
      public:
      void print()
      {
            cout<<"Employee Id: "<<employee_id<<endl;
            cout<<"Employee Name: "<<employee_name<<endl;
            cout<<"Department number: "<<department_no<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Martial status: "<<marital_status<<endl;


      }
      

};
int main()
{
      display d1;

      d1.get();
      d1.personal();
      d1.print();

      return 0;
}
