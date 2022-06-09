// Write a c++ program to demonstrate example of hierarchical inheritance to get square and cube of number.
#include <iostream>
using namespace std;
class number
{
      protected:
      int num;
      public:
      void get()
      {
            cout<<"Enter the number: ";
            cin>>num;
      }
      
};
class square: public number
{
      private:
      int squarenumber;
      public:
      void cal()
      {
            squarenumber=num*num;
            cout<<"Sqaure of the "<<num<<" is "<<squarenumber<<endl;
      }
      
};
class cube: public number
{
      private:
      long int cubenumber;
      public:
      void cubecal()
      {
            cubenumber=num*num*num;
            cout<<"Cube of the "<<num<<" is "<<cubenumber<<endl;
      }
};
int main()
{
      square s1;
      cube c1;
      cout<<"for square: "<<endl;
      s1.get();
      s1.cal();
      cout<<"for cube: "<<endl;
      c1.get();
      c1.cubecal();

      return 0;
}
