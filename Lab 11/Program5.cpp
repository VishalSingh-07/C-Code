// WAP to demonstrate file handling.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
      ifstream in;
      string str;
      
      in.open("sample.txt");

      while(in.eof()==0)
      {
            getline(in,str);
            cout<<str<<endl;
      }
      ofstream out;

      out.open("sample2.txt");
      out<<str;

      in.close();
      out.close();

      return 0;
}