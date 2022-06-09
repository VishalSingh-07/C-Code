// WAP to demonstrate an example of binary operator overloading using friend’s function.
#include <iostream>
using namespace std;
class time
{
      public:
      int hours,minutes;
      
      time()
      {
            hours=0;
            minutes=0;
      }
      time(int h,int m)
      {
            hours=h;
            minutes=m;
      }
      friend time operator +(time&, time&);
};
time operator +(time&t1,time&t2)
{
      time t3;
      t3.hours=t1.hours+t2.hours;
      t3.minutes=t1.minutes+t2.minutes;

      return t3;
}
int main()
{
      time t4(8,56);
      time t5(7,15);
      time t6;
      t6=t4+t5;
      cout<<"Result: ";
      cout<<t6.hours<<" hours ";
      cout<<t6.minutes<<" minutes"<<endl;

      return 0;

}