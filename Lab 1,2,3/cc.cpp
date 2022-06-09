#include <iostream>
using namespace std;
 
class Time
{
     private:
    int hours;
    int minutes;
    
    public:
    void input()
    {
        cin>>hours>>minutes;
        cout<<"time in india"<<"\n"<<"hours: "<<hours<<"minutes:"<<"\n";
    }
    void output()
    {
        cin>>hours>>minutes;
        cout<<"time in UK"<<"\n"<<"hours: "<<hours <<"minutes:"<<minutes<<"\n";
    }
    void display()
    {
        cout<<"hours:"<<hours<<"minutes:"<<minutes;
    }
    
    void diff(Time t1,Time t2)
    {
        minutes=(t1.minutes - t2.minutes);
        hours=(t1.hours-t2.hours-hours);
    }
};    
int main()
{
        Time t1,t2,t3;
        t1.input();
        t2.input();
        t3.diff(t1,t2);
        t3.display();
        
        return 0;
}