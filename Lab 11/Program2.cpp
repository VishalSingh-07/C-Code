//WAP to demonstrate exception handling(array out of bound).
#include <iostream>
using namespace std;
float division(int a,int b)
{
      if(b==0)
      {
            throw b;
      }
      else if(b<0)
      {
            throw "Negative Input";
      }

      return a/b;

}
int main()
{
      int i,result;
      
      cout<<"Enter the Number: ";
      cin>>i;
      try
      {
            result=division(100,i);
            cout<<result<<endl;

      }
      catch(int exception_value)
      {
            cout<<"Exception Occurred : Exception Value: "<<exception_value;
      }
      catch(const char* exception_str)
      {
            cout<<"Exception Occurred : Exception Value: "<<exception_str;
      }
      return 0;
}