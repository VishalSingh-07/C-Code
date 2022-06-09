/*
Create a class Bank Account with appropriate data members
and functions. The class should also have a data member
opening_balance and function set_opening_balance.
This function should initialize the value of 
opening_balance to 10000. Create appropriate objects
and call the functions. Make use of public and 
private access specifier wherever required. 

*/
#include <iostream>
using namespace std;


     

class bank_account
{
   private:
   long int customer_id;
   char customer_name[20];
   int account_number;
   char branchaddress[20];
   char branch_name[20];
   int IFSCcode;
   int MICRCode;
   float balance;
   float opening_balance;

   public:
   void input()
   {
      cout<<"Enter the Customer Name : ";
      cin>>customer_name;
      cout<<"Enter the Account Number: ";
      cin>>account_number;
      cout<<"Enter the customer id : ";
      cin>>customer_id;

   }
   bank_account()
   {
      opening_balance=10000;
      
   }
   bank_account(int a)
   {
         opening_balance=a;
   }
   void deposit(){}
   void withdraw() {}
   void open_fd(){}
   void change_pin(){}
   void add_beneficiary(){}
   
};

int main()
{
   bank_account customer1(5000), customer2(1000), customer3, customer4(5000);
   
   customer1.input();

   
   
   


   return 0;


}



/*

void input()
      {
            cout<<"Enter the Shape details: "<<endl;
            
            cout<<"Enter the Radius: ";
            cin>>radius;

            cout<<"Enter the Length: ";
            cin>>length;

            cout<<"Enter the Width: ";
            cin>>width;

      }
*/
   


