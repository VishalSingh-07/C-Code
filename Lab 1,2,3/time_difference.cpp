#include <iostream>
using namespace std;
class time
{
      private:
      int hours, minutes,seconds;
      int diff_seconds,diff_minutes,diff_hours;

      public:
      void input()
      {
            cout<<"For New Delhi: "<<endl;
            cout<<"Enter the hours: ";
            cin>>hours;
            cout<<"Enter the minutes: ";
            cin>>minutes;
            cout<<"Enter the Seconds: ";
            cin>>seconds;
            cout<<"The current time of New delhi : "<<hours<<" hours "<< minutes<<" minutes "<<seconds<<" seconds";
      }
      void input1()
      {
            cout<<"\n For London: "<<endl;
            cout<<"Enter the hours: ";
            cin>>hours;
            cout<<"Enter the minutes: ";
            cin>>minutes;
            cout<<"Enter the Seconds: ";
            cin>>seconds;
            cout<<"The current time of London: "<<hours<<" hours "<< minutes<<" minutes "<<seconds<<" seconds";    
      }
      void display()
      {
            cout<<"\n The time difference between two times zones is : ";
            cout<<diff_hours<<"hours "<<diff_minutes<<"minutes "<<diff_seconds<<"seconds";
      }
      void difference(time t1, time t2)
      {
            if(t2.seconds > t1.seconds)
            {
                  t1.minutes--;
                  t1.seconds += 60;
            }
            diff_seconds=t1.seconds-t2.seconds;

            if(t2.minutes > t1.minutes)
            {
                  t1.hours--;
                  t1.minutes +=60;


            }
            
            diff_minutes= t1.minutes - t2.minutes;
            diff_hours= t1.hours - t2.hours;
            
            
      }
};
int main()
{
      time t1,t2,t3;
      t1.input();
      t2.input1();
      t3.difference(t1,t2);
      t3.display();

      return 0;
}




/*
if(t1.hours>t2.hours)
            {
                  diff_hours= t1.hours - t2.hours;
                  
            }
            if(t2.hours>t1.hours)
            {
                  diff_hours= t2.hours - t1.hours;

            }
*/