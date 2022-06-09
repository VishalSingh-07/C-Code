#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      int p,c,m,err=0;
      string name;

      do
      {
            try
            {
                  cout<<"Enter the Student Name: ";
                  cin>>name;
                  cout<<"Enter Physics Marks: ";
                  cin>>p;
                  if(!(p>=0 && p<=100))
                  {
                        throw(p);
                  }
                  cout<<"Enter Chemistry Marks: ";
                  cin>>c;
                  if(!(c>=0 && c<=100))
                  {
                        throw(c);
                  }
                  cout<<"Enter Mathematics Marks: ";
                  cin>>m;
                  if(!(m>=0 && m<=100))
                  {
                        throw(m);
                  }
                  err=0;
            }
            catch(int e)
            {
                  cout<<"Invalid Marks"<<endl;
                  err=1;
            }
      }while(err);

      return 0;      
}