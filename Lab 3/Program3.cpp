//WAP to read a matrix of size m x n from the keyboard and display the same on the screen using functions. Make the row parameter of the matrix as a default argument.
#include <iostream>
using namespace std;
void display(int m,int n,int a[30][30])
{
      int i,j;
      cout<<"\n Matrix :"<<endl;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  cout<<a[i][j]<<" ";
            }
            cout<<"\n";
      }

}
int main()
{
      int a[30][30];
      int m=2,n,i,j;

      cout<<"Enter the column of the Matrix: ";
      cin>>n;
      cout<<"The Order of Matrix  is: "<<m<<" x "<<n<<endl;


      cout<<"\nEnter the Element of Matrix :"<<endl;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  cout<<"Enter the value of element a["<<i<<"]"<<"["<<j<<"]"<<" : ";
                  cin>>a[i][j];
            }
      }

      display(m,n,a);

      return 0;
}