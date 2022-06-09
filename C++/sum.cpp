// Function Overloading : - When two or more functions have the same name but they differ in the  
// number and/or type of arguments.
#include <iostream>

using namespace std;

void sum(int,int);
void sum(int,int,int);

void sum(char,char);
void sum(float,float);

int main()
{
      sum(1,2);
      sum(1,2,3);
      sum('a','b');
      // sum(1.2,3.2);
      return 0;
}

void sum(int a, int b){

      std::cout<<a+b<<endl;
}
void sum(int a, int b,int c){

      std::cout<<a+b+c<<endl;
}

void sum(char x, char y)
{
      std::cout<<x+y<<endl;
}

void sum(float p, float q){

      std::cout<<p+q<<endl;
}
/*Inline Functions: -
This kind of function is written like a normal function in the source file bit compiles into inline 
code instead of into a function. When the program is compiled, the function body is actually 
inserted into the program wherever a function call occurs.
*/
