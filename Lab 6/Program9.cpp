// Write a program to read and print employee information with department and pf information using hierachical inheritance
#include <iostream>
using namespace std;
class company
{
      protected:
      char com_name[20];
      char branch[20];
      char department[30];
      float basic,hra,da,pf;
      float totalpay;
};
class salary:public company
{
      public:
      void get()
      {
            cout<<"Enter the salary details: "<<endl;
            cout<<"Enter basic salary: ";
            cin>>basic;
            cout<<"Enter the HRA of salary: ";
            cin>>hra;
            cout<<"Enter the DA of salary: ";
            cin>>da;
            cout<<"Enter the pf of salary: ";
            cin>>pf;
      }
      void cal_salary()
      {
            totalpay=basic+hra+da+pf;
            cout<<"Salary of a employee is : "<<totalpay<<endl;
      }

};
class employee:public company
{
      private:
      char name[20];
      int emp_id;
      int age;
      char gender[8];

      public:
      void inputdata()
      {
            cout<<"Enter the company name: ";
            cin>>com_name;
            cout<<"Enter the branch: ";
            cin>>branch;
            cout<<"Enter the department: ";
            cin>>department;
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the employee id: ";
            cin>>emp_id;
            cout<<"Enter the age: ";
            cin>>age;
            cout<<"Enter the gender: ";
            cin>>gender;
      }

      void outputdata()
      {
            cout<<"Company name: "<<com_name<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Department: "<<department<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Employee id: "<<emp_id<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
      }  

};
int main()
{
      employee e1;
      salary s1;

      e1.inputdata();
      s1.get();
      e1.outputdata();
      s1.cal_salary();

      return 0;
}