/*
Design three classes: Student, Exam and Result. The student class has data members such as roll no, 
name etc. Create a class Exam by inheriting the Student class. The Exam class adds data members
representing the marks scored in six subjects. Derive the Result from class Exam and it has its
own members such as total marks. Write an interactive program to model this relationship.
What type of inheritance this model belongs to?
*/
#include <iostream>
using namespace std;
class student
{
      private:
      int roll_no;
      char name[15];
      public:
      void get()
      {
            cout<<"Enter the roll_no: ";
            cin>>roll_no;
            cout<<"Enter the name: ";
            cin>>name;
      }
};
class exam: public student
{
      protected:
      int m1,m2,m3,m4,m5,m6;
      public:
      void marks()
      {
            cout<<"Enter the marks of Physics: ";
            cin>>m1;
            cout<<"Enter the marks of Chemistry: ";
            cin>>m2;
            cout<<"Enter the marks of Mathematics: ";
            cin>>m3;
            cout<<"Enter the marks of English: ";
            cin>>m4;
            cout<<"Enter the marks of Computer Science: ";
            cin>>m5;
            cout<<"Enter the marks of Hindi: ";
            cin>>m6;

      }

};
class result:public exam
{
      private:
      int total;
      public:
      void cal()
      {
            total=m1+m2+m3+m4+m5+m6;

      }
      void cal_display()
      {
            cout<<"Total Marks: "<<total<<endl;
      }


};
int main()
{
      result s1,s2;
      s1.get();
      s1.marks();
      s1.cal();
      s1.cal_display();
      s2.get();
      s2.marks();
      s2.cal();
      s2.cal_display();
      

      return 0;

}