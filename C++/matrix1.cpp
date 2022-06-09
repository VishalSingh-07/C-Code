// WAP to perform the following operations on matrices using functions and switch cases.
#include <iostream>
#include <conio.h>
using namespace std;
void add(int, int, int, int, int, int);
void sub(int, int, int, int, int, int);
void mult(int, int, int, int, int, int);
void trans(int, int, int);

int main(void)
{
    int a[30][30], b[30][30], trans[30][30];
    int i, j, m, n, o, p;
    char choice, ans;
    cout<<"\n1st Matrix";
    cout<<"\nEnter the number of rows   : ";
    cin>>m;
    cout<<"\nEnter the number of columns: ";
    cin>>n;
    for (i=0; i<m; i++)
    {
        cout<<"Enter the values for "<<i+1<<"th row: \n";
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n2nd Matrix";
    cout<<"\nEnter the number of rows   : ";
    cin>>o;
    cout<<"\nEnter the number of columns: ";
    cin>>p;
    for (i=0; i<o; i++)
    {
        cout<<"Enter the values for "<<i+1<<"th row: \n";
        for (j=0; j<p; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\n\nMATRIX A\n";
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n\nMATRIX B\n";
    for (i=0; i<o; i++)
    {
        for (j=0; j<p; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    while(ans='y')
    {
        cout<<"\n\nKeyword | Operation"
                "\n   a    | Addition"
                "\n   s    | Subtraction"
                "\n   m    | Multiplication"
                "\n   t    | Tranpose";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 'a':
                add(a[30][30], b[30][30], m, n, o, p);
                break;
            case 's':
                sub(a[30][30], b[30][30], m, n, o, p);
                break;
            case 'm':
                mult(a[30][30], b[30][30], m, n, o, p);
                break;
            /*case 't':
                char mat;
                cout<<"\nWhich matrix? (A/B) ";
                cin>>mat;
                if (mat=='A')
                    trans(a[30][30], m, n);
                else if (m=='B')
                    trans(b[30][30], o, p);
                break;*/
        }
    }
    cout<<"Do you want to choose another option? (y/n) ";
    cin>>ans;
}
void add(int a[30][30], int b[30][30], int m, int n, int o, int p)
{
    cout<<"\n\nADDITION";
    int add[30][30], i, j;
    if (m!=n or o!=p)
    {
        cout<<"\nThe matrices cannot be added.";
    }
    else
    {
        cout<<"\nA+B is \n";
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                cout<<a[i][j]+b[i][j];
            }
            cout<<endl;
        }
    }
}
void sub(int a[30][30], int b[30][30], int m, int n, int o, int p)
{
    cout<<"\n\nSUBTRACTION";
    int sub[30][30], i ,j ;
    if (m!=n or o!=p)
    {
        cout<<"\nThe matrices cannot be subtracted.";
    }
    else
    {
        cout<<"\nA-B is \n";
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                cout<<a[i][j]-b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}
void mult(int a[30][30], int b[30][30], int m, int n, int o, int p)
{
    cout<<"\n\nMULTIPLICATION";
    int mult[30][30], i, j, k;
    if (n!=o)
    {
        cout<<"\nThe matrices cannot be multiplied.";
    }
    else
    {
        cout<<"\nAxB is \n";
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                for (k=0; k<n; k++)
                {
                    cout<<a[i][k]+b[k][j]<<"\t";
                }    
            }
            cout<<endl;
        }
    }
}
void trans(int a[30][30], int m, int n)
{
    cout<<"\n\nTRANSPOSE";
    cout<<"\nTranspose of the matrix is  \n";
    int trans[30][30], i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
}