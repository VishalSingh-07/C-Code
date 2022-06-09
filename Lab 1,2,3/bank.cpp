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
   void set_opening_balance()
   {
      opening_balance=10000;
      cout<<"opening_balance is "<<opening_balance<<endl;
   }
   void deposit(){}
   void withdraw() {}
   void open_fd(){}
   void change_pin(){}
   void add_beneficiary(){}
   
};

int main()
{
   bank_account customer1, customer2, customer3, customer4;
   
   customer1.input();
   customer1.set_opening_balance();
   


   return 0;


}
   


