#include <iostream>

using namespace std;

class beta;
class alpha
{
    private: 
     int data;
     
     public:
     alpha()
     {
         data=6;
         cout<<"\n Value in class alpha: "<<data;
     }
     friend int frifunc(alpha,beta);
};

    class beta
{
    private: 
     int data;
     
     public:
     alpha()
     {
         data=7;
         cout<<"\n Value in class beta: "<<data;
     }
     friend int frifunc(alpha,beta);
};
int frifucnt(alpha a,beta b)
{
    return(a.data,b.data);
}
int main()
{
    alpha aa;
    beta bb;
    cout<<frifunc(aa,bb);
    cout<<"\n";
    return 0;
}