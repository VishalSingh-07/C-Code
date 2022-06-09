#include <iostream>
using namespace std;
int display(int , int ,int);

int main()
{
      // m is the row of the matrix and 
      // n is the colum of the matrix
      int a[30][30],m,n;
      
      cout<< "Enter the order of matrix: ";
      cin>>m>>n;

      cout<<"Enter the element of the matrix: "<<endl;

      for (int i = 0; i < m; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout<<"Enter the value of element a["<<i<<j<<"] = ";
                  cin>>a[i][j];
            }
            
      }
      display(a[30][30],m,n);

     

      return 0;
      
}
int display(int arr[30][30],int x, int y)
{
      for(int i=0;i<x;i++)
      {
            for(int j=0;j<y;j++)
            {
                  cout<<arr[i][j];
            }
            
      }
}
