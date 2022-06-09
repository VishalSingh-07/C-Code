/*
Consider an example of book shop which sells books and video tapes. These two classes are inherited
from base class called media. The media class has command data members such as title and publication.
The book class has data members for storing number of pages in a book and tape class has playing time
in a tape. Each class will have member functions such as read () and show (). In the base class,
these members have to be defined as virtual functions. Write a program to models the class hierarchy
for book shop and processes objects of these classes using pointers to base class. Write the rules of
virtual functions.
*/
// WAP to demonstrate an example of pure virtual function.
#include <iostream>
using namespace std;
class media
{
      protected:
      char title[50];
      char publication[60];
      public:
      virtual void read()=0;
      virtual void show()=0;

};
class books:public media
{
      private:
      int pages;
      public:
      void read()
      {
            cout<<"Enter the title of book: ";
            cin>>title;
            cout<<"Enter the publications of book: ";
            cin>>publication;
            cout<<"Enter the number of pages of book: ";
            cin>>pages;
      }
      void show()
      {
            cout<<"The Title of book: "<<title<<endl;
            cout<<"The publication of book: "<<publication<<endl;
            cout<<"Pages of book: "<<pages<<endl;

      }

};
class video_tapes:public media
{
      private:
      int hours,minutes;
      public:
      void read()
      {
            cout<<"Enter the title of Video_tape: ";
            cin>>title;
            cout<<"Enter the publications of Video_tape: ";
            cin>>publication;
            cout<<"Time of video_tape: "<<endl;
            cout<<"Enter the hours: ";
            cin>>hours;
            cout<<"Enter the minutes: ";
            cin>>minutes;


      }
      void show()
      {
            cout<<"The Title of Video_Tape: "<<title<<endl;
            cout<<"The publication of Video_tape: "<<publication<<endl;
            cout<<"Playing Time of Video tape: "<<hours<<" hours "<<minutes<<" minutes"<<endl;  
      }

};
int main()
{
      media *B = new books();
      media *VT= new video_tapes();

      B->read();
      B->show();

      VT->read();
      VT->show();
      

      return 0;

}
