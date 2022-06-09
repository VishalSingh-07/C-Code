// WAP to demonstrate file handling.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
      ofstream myfile("example.txt");
      if(myfile.is_open())
      {
            myfile<<"This is a line.\n";
            myfile<<"This is another line.\n";
            myfile.close();

      }
      else
      {
            cout<<"unable to open file";
      }

      return 0;
}
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//       string line;
//       ifstream myfile("example.txt");
//       if(myfile.is_open())
//       {
//             while(getline(myfile,line))
//             {
//                   cout<<line<<'\n';
//             }
//             myfile.close();
//       }
//       else
//       {
//             cout<<"unable to open file";
//       }
//       return 0;
// }
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//       ofstream myfile;
//       myfile.open("example.txt");
//       myfile<<"Writing this to a file.\n";
//       myfile.close();

//       return 0;
// }