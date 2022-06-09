//WAP to perform the following operations on matrices using functions and switch cases.

#include <iostream>
using namespace std;
#include <stdlib.h>
void addition(int m,int n,int p, int q,int a[30][30],int b[30][30])
{
      int i,j;
      int c[30][30];

      if(m==p && n==q)
      {
            for(i=0;i<p;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        c[i][j]=a[i][j]+b[i][j];
                  }
            
            }
            cout<<"\n Addition of Two Matrics is :"<<endl;
            for(i=0;i<p;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        cout<<c[i][j]<<" ";
                  
                  }
                  cout<<"\n";
            
            }
            
      }

      else
      {
          cout<<"Addition is not possible";  
      }
}

void subtraction(int m,int n,int p, int q,int a[30][30],int b[30][30])
{
      int i,j;
      int c[30][30];

      if(m==p && n==q)
      {
            for(i=0;i<p;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        c[i][j]=a[i][j]-b[i][j];
                  }
            
            }
            cout<<"\n Subtraction of Two Matrics is :"<<endl;
            for(i=0;i<p;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        cout<<c[i][j]<<" ";
                  
                  }
                  cout<<"\n";
            
            }
            
      }

      else
      {
          cout<<"Subtraction is not possible"<<endl;  
      }
}

void multiplication(int m,int n,int p, int q,int a[30][30],int b[30][30])
{
      int c[30][30];
      int i,j,k;

      if(n==p)
      {
            for(i=0;i<m;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        c[i][j]=0;
                        for(k=0;k<n;k++)
                        {
                              c[i][j]= c[i][j]  + a[i][k]*b[k][j];

                        }
                  }

            }
            cout<<"\n Multiplication of two matrix is :"<<endl;
            for(i=0;i<m;i++)
            {
                  for(j=0;j<q;j++)
                  {
                        cout<<c[i][j]<<" ";
                        
                  }
                  cout<<"\n";

            }


      }
      else
      {
            cout<<"Multiplication is not possible because the colum of the matrix A is not equal to row of matrix B."<<endl;
      }
      

}
int main()
{
      int a[30][30],b[30][30],c[30][30];
      int m,n,p,q,i,j;
      int choice,option;

      cout<<"Enter the row of the Matrix A:";
      cin>>m;
      cout<<"Enter the column of the Matrix A: ";
      cin>>n;
      cout<<"The Order of Matrix A is: "<<m<<" x "<<n<<endl;

      
      cout<<"Enter the row of the Matrix B: ";
      cin>>p;
      cout<<"Enter the column of the Matrix B: ";
      cin>>q;
      cout<<"The Order of Matrix B is: "<<p<<" x "<<q<<endl;


      cout<<"\nEnter the Element of Matrix A:"<<endl;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  cout<<"Enter the value of element a["<<i<<"]"<<"["<<j<<"]"<<" : ";
                  cin>>a[i][j];
            }
      }

      cout<<"\nEnter the Element of Matrix B:"<<endl;
      for(i=0;i<p;i++)
      {
            for(j=0;j<q;j++)
            {
                  cout<<"Enter the value of element b["<<i<<"]"<<"["<<j<<"]"<<" : ";
                  cin>>b[i][j];
            }
      }

      // Display the Matrix
      cout<<"\n Matrix A:"<<endl;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  cout<<a[i][j]<<" ";
            }
            cout<<"\n";
      }

      cout<<"\n Matrix B:"<<endl;
      for(i=0;i<p;i++)
      {
            for(j=0;j<q;j++)
            {
                  cout<<b[i][j]<<" ";
            }
            cout<<"\n";
      }
      label:

      cout<<"\n Choose you Desire option: "<<endl;

      cout<<"\n Enter 1: For Addition of Matrix"<<endl;
      cout<<"\n Enter 2: For Subtraction of Matrix"<<endl;
      cout<<"\n Enter 3: For Multiplication of Matrix"<<endl;
      cout<<"\n Enter the desize choice: "<<endl;
      cin>>choice;


      switch(choice)
      {
            case 1:
                        addition(m,n,p,q,a,b);
                        break;
            case 2:
                        subtraction(m,n,p,q,a,b);
                        break;
            case 3:
                        multiplication(m,n,p,q,a,b);
                        break;
            default:
                  
                        cout<<"\n You Enter the wrong choose.Please Enter the correct Choose"<<endl; 

      }
      
                  
      cout<<"\n Press 0 to continue and Press 100 to quit: ";
      cin>>option;

      if(option==0)
      {
            goto label;
      }

      else if(option==100)
      {
            exit(0);
      }
      



      return 0;
}
 