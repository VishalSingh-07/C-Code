/*
Create a class Mobile Phones with appropriate data members and functions. The class should also have a function that initializes
some data member (Think of a data member for the class mobile phone and initialize it to some value as done in the previous
programs). Create appropriate objects and call the functions. Make use of public and private access specifier wherever required.
*/
#include<iostream>
using namespace std;
class Mobile_Phone
{ 
      long int imei;
      char company[25];
      char model_no[20];
      float price;
      char software[50];
      public:
      void input()
      { 
            cout<<"\nEnter IMEI: ";
            cin>>imei;
            cout<<"Enter company: ";
            cin>>company;
            cout<<"Enter model no: ";
            cin>>model_no;
            cout<<"Enter price: ";
            cin>>price;
            cout<<"Enter operating software: ";
            cin>>software;
      }
      void display()
      {
            cout<<"\n\nIMEI number: "<<imei;
            cout<<"\nCompany: "<<company;
            cout<<"\nModel number: "<<model_no;
            cout<<"\nPrice: "<<price;
            cout<<"\nSoftware "<<software;
      }
};
int main()
{ 
      int n,i;
      Mobile_Phone samsung,apple;
      samsung.input();
      apple.input();
      samsung.display();
      apple.display();
      return 0;
}
