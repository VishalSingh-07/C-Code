// Write a C++ program to demonstrate example of private simple inheritance

#include <iostream>
using namespace std;
class base
{
      private:
      int a,b;
      public:
      void get()
      {
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;

      }
      int subtract()
      {
            int c;
            if(a>b)
            {
                  c=a-b;
                  return c;
            }
            else if(b>a)
            {
                  c=b-a;
                  return c;
            }
            else if(a==b)
            {
                  return 0;
            }
      
      }
};
class derived: private base
{
      private:
      int result;
      public:
      void input()
      {
            get();

      }
      void display()
      {
            result=subtract();
            cout<<"Subtraction of a and b is : "<<result<<endl;


      }
};
int main()
{
      derived d1;
      d1.input();
      d1.display();

      return 0;
}

























// #include <iostream>
// using namespace std;
 
// class A
// {
//     private:
//         int a;
//     protected:
//         int x;  
//     public:
//         void setVal(int v)
//         {
//             x=v;    
//         }
// };
 
// class B:private A
// {
//       public:
//       void printVal(void)
//       {
//             setVal(10);
		
//             cout << "value of x: " << x << endl; 
//       }
// };
 
// int main()
// {
//         B objB; 
//         objB.printVal();
//         return 0;
// }
