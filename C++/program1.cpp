// Write a Program that counts the total number of passengers in the queue.
#include <iostream>
using namespace std;

class A
{
      int x;
      public:
      static int count;
      void getdata(int a)
      {
            x=a;
            count++;
      }
      void getcount(void)
      {
            cout<<"count: "<<count<<endl;
      }

};
int A::count;
int main()
{
      A a1,a2;
      
      a1.getdata(1);
      a1.getcount();
      a2.getdata(2);
      a2.getcount();

      return 0;

}
