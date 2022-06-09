/*
St Peters School is a convent school that provides education from K.G class to 12th class. Quarterly, 
half yearly and final exams are conducted every year for students of all classes in St Peters School.
The class teacher of each class has to prepare a student report for every student after a particular exam
has been conducted. Recently, it has been found by the principal of St Peters School that a lot of time is
being taken by the class teacher in preparing the student reports. The principal has also found out that the
efficiency of the teachers have decreased because they have been manually performing the task of preparing the
student reports for each student. St Peters have 600 students studying in its different classes. Preparing
student report for at least 30 students per class has become a tedious task for the class teacher of a specific
class. How can the principal of St Peters School solve the problem of the teachers?
*/
#include<iostream>
#define MAX 30
using namespace std;

class student 
{
      private:
      int rollno;
      char name[20];
      char fathername[20];
      public:

      void get_student_information()
      {
            cout << "Enter Roll No:";
            cin>>rollno;
            cout<<"Enter the Name:";
            cin>>name;
            cout<<"Enter the Father's Name: ";
            cin>>fathername;
            
      }
      void put_student_information()
      {
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Father's Name: "<<fathername<<endl;
            
      }

      
};

class theory_exam: virtual public student 
{
      public:
      int mathematics, physics,chemistry,english,hindi,computerscience;

      void get_theory_exam_marks()
      {
            cout << "Enter Theory Exam Marks--"<<endl;
            cout << "Enter the marks of Mathematics: ";
            cin>>mathematics;
            cout << "Enter the marks of Physics: ";
            cin>>physics;
            cout << "Enter the marks of Chemistry: ";
            cin>>chemistry;
            cout << "Enter the marks of English: ";
            cin>>english;
            cout<<"Enter the marks of Hindi: ";
            cin>>hindi;
            cout<<"Enter the marks of Computer Science: ";
            cin>>computerscience;

      }

      void put_theory_exam_marks()
      {
            cout << "Theory Marks Obtained---"<<endl;
            cout << "Mathematics:" << mathematics<<endl;
            cout << "Physics:" << physics<<endl;
            cout << "Chemistry:" <<chemistry<<endl;
            cout << "English:" <<english<<endl;
            cout<<"Hindi: "<<hindi<<endl;
            cout<<"Computer Science: "<<computerscience<<endl;
      }
};

class practical_exam : virtual public student 
{
      public:
      int p_mathematics, p_physics,p_chemistry,p_english,p_hindi,p_computerscience;
      
      void get_practical_exam_marks()
      {
            cout << "Enter Practical Exam Marks--"<<endl;
            cout << "Enter the marks of Mathematics: ";
            cin>>p_mathematics;
            cout << "Enter the marks of Physics: ";
            cin>>p_physics;
            cout << "Enter the marks of Chemistry: ";
            cin>>p_chemistry;
            cout << "Enter the marks of English: ";
            cin>>p_english;
            cout<<"Enter the marks of Hindi: ";
            cin>>p_hindi;
            cout<<"Enter the marks of Computer Science: ";
            cin>>p_computerscience;
      }

      void put_practical_exam_marks()
      {
            cout << "Practical Marks Obtained---"<<endl;
            cout << "Mathematics:" << p_mathematics<<endl;
            cout << "Physics:" << p_physics<<endl;
            cout << "Chemistry:" <<p_chemistry<<endl;
            cout << "English:" <<p_english<<endl;
            cout<<"Hindi: "<<p_hindi<<endl;
            cout<<"Computer Science: "<<p_computerscience<<endl;
      }
};

class result : public theory_exam, public practical_exam
{
      private:
      int total;
      int t1,t2;
      float percentage;
      public:
      void display()
      {
            t1=mathematics+physics+chemistry+english+hindi+computerscience;
            t2=p_mathematics+p_physics+p_chemistry+p_english+p_hindi+p_computerscience;
            total = t1+t2;
            put_student_information();
            put_theory_exam_marks();
            put_practical_exam_marks();
            cout << "Total Marks:" << total<<endl;
            percentage=((float)total/600)*100;
            cout<<"Percentage: "<<percentage<<" %"<<endl;
      }
};

int main()
{
      int n,standard,i;
      char teacher_name[20];
      result obj[MAX];
      cout<<"Enter the number of student in a class: ";
      cin>>n;
      cout<<"Enter the class:";
      cin>>standard;
      for(i=1;i<=n;i++)
      {
            obj[i].get_student_information();
            obj[i].get_theory_exam_marks();
            obj[i].get_practical_exam_marks();
            obj[i].display();
      
      }
      return 0;
}