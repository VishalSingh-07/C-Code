// Create a class person which includes character array name of size 64, age in numeric, character array address of size 64, and total salary in real numbers (divide salary in different components, if required). Make an array of objects of class person of size 10.
#include <iostream>
#define MAX 10
using namespace std;
class person
{
      protected:
      char person_name[64];
      int age;
      char address[64];
      float basic,hra,da,pf;
      float totalpay;
      public:
      void get()
      {
            cout<<"Enter the Person name: ";
            cin>>person_name;
            cout<<"Enter the age: ";
            cin>>age;
            cout<<"Enter the Address: ";
            cin>>address;
      }
      
      void get_salary()
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
      }
      void display()
      {
            cout<<"Name: "<<person_name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Salary: "<<totalpay<<endl;
      }
};
int main()
{
      person p[MAX];
      int per,i;
      cout<<"Enter the Number of Person: ";
      cin>>per;
      for(i=1;i<=per;i++)
      {
            p[i].get();
            p[i].get_salary();
            p[i].cal_salary();
            p[i].display();
      }

      return 0;


}

