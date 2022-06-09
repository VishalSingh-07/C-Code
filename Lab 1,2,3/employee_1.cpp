
#include <iostream>
using namespace std;

class employee
{
      private:
      int empid;
      char name[100];
      long int salary;
     

      public:
      
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
            
      }
      
      
};
int main()
{
      employee emp[10];
      
      
      for(int i=0;i<10;i++)
      {
            emp[i].input();
      }
      for(int i=0;i<10;i++)
      {
            emp[i].display();
      }
      return 0;
}


