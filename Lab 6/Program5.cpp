// C++ program to demonstrate example of multilevel inheritance.
#include <iostream>
using namespace std;
class school
{
      private:
      int sc;
      public:
      void get()
      {
            cout<<"Enter the number of school branch: ";
            cin>>sc;
      }
};
class teacher:public school
{
      private:
      int tc;
      public:
      void get1()
      {
            cout<<"Enter the number of teacher in all branch: ";
            cin>>tc;
      }
};
class student: public teacher
{
      private:
      int st;
      public:
      void get2()
      {
            cout<<"Enter the number of student in all branch: ";
            cin>>st;
      }


};

int main()
{
      student s1;
      s1.get();
      s1.get1();
      s1.get2();

      return 0;

}

