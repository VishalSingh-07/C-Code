#include <iostream>
using namespace std;

class Distance  //English Distance class
{
      private:
      int feet;
      float inches;

      public:

      Distance(int ft, float in)
      {
            feet=ft;
            inches=in;
      }
      void getdist()
      {
            cout<<"\n Enter Feet: ";
            cin>>feet;
            cout<<"\n Enter inches: ";
            cout<<inches;
      }
      void showdist() const
      {
            cout<<"feet: "<<feet<<endl;
            cout<<"inches: "<<inches<<endl;
      }


};
int main()
{
      const Distance football(300,0);
      // football.getdist();      // Error: getdist() not const
      // cout<<"football= ";

      football.showdist();           //ok
      
      return 0;
}