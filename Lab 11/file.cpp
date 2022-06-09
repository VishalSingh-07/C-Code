#include <iostream>
#include <fstream>
using namespace std;
#include <string>
int main()
{
      char sourcefile[50];
      char destinationfile[50];
      string str;
      ifstream fs;
      ofstream ft;

      cout<<"Enter the source file with extension: ";
      gets(sourcefile);
      fs.open(sourcefile);
      if(!fs)
      {
            cout<<"Error!! Unable to open the file";
            exit(1);
      }
      cout<<"Enter the destination file with extension: ";
      gets(destinationfile);
      ft.open(destinationfile,ios::app);
      if(!ft)
      {
            cout<<"Error!! unable to open the file";
            exit(2);
      }
      if(fs&&ft)
      {
            while(getline(fs,str))
            {
                  ft<<str<<"\n";
            }
            cout<<"Source File Data is successfully copy to Destionation file";
      }
      else
      {
            cout<<"File cannot open";
      }
      cout<<"Open Destination file and checked";
      fs.close();
      ft.close();

      return 0;
}