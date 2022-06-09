/*
Write a program to calculate the total mark of a student 
using the concept og virtual base class.
*/
//WAP to demonstrate virtual classes.
#include<iostream>
using namespace std;

class student 
{
      private:
      int rollno;
      public:

      void getnumber()
      {
            cout << "Enter Roll No:";
            cin>>rollno;
      }

      void putnumber()
      {
            cout << "Roll No:" << rollno <<endl;
      }
};

class test : virtual public student 
{
      public:
      int mathematics, physics,chemistry,english;

      void getmarks()
      {
            cout << "Enter Marks"<<endl;
            cout << "Enter the marks of mathematics: ";
            cin>>mathematics;
            cout << "Enter the marks of physics: ";
            cin>>physics;
            cout << "Enter the marks of chemistry: ";
            cin>>chemistry;
            cout << "Enter the marks of english: ";
            cin>>english;

      }

      void putmarks()
      {
            cout << "Marks Obtained---"<<endl;
            cout << "Mathematics:" << mathematics<<endl;
            cout << "Physics:" << physics<<endl;
            cout << "Chemistry:" <<chemistry<<endl;
            cout << "English:" <<english<<endl;
      }
};

class sports : virtual public student 
{
      public:
      int score;

      void getscore()
      {
            cout << "Enter Sports Score:";
            cin>>score;
      }

      void putscore()
      {
            cout << "Sports Score:" << score<<endl;
      }
};

class result : public test, public sports
{
      int total;
      
      public:
      void display()
      {
            total = mathematics + physics + chemistry + english + score;
            putnumber();
            putmarks();
            putscore();
            cout << "Total Score:" << total<<endl;
      }
};

int main()
{
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();

    return 0;
}