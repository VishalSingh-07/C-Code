// WAP to demonstrate file handling.
#include <iostream>
using namespace std;
#include<fstream>
int main()
{ 
      int n;
      char a[50];
      ofstream ofile;
      ofile.open("A.txt",ios::in);
      cout<<"Enter the number of lines you want to write into the file: ";
      cin>>n;
      
      for(int i=0; i<=n; i++)
      { 
            cin.getline(a,50);
            ofile<<a<<endl;
      }
      ofile.close();
      ifstream ifile("A.txt",ios::in);
      ofile.open("B.txt",ios::out);
       
      while(!ifile.eof())
      { ifile.getline(a,50,'\n');
        cout<<a<<endl;
        ofile<<a<<endl;
      }
      ifile.close();
      ofile.close();
      return 0;
}
