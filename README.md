Task by: Ayush Krishna
             19HS20012




# BANK MANAGEMENT SYSTEM
This is the command line interface to manage a small bank.Here we have the following options:
1.Create a new account
2.Deposit money to the account
3.Withdraw money from the amount
4.Balance enquiry
5.All account holder list
6.Modify details of the account
7.Exit fromnthe interface

## Concept

I have used the concept of OOP  in c++ language.This is just the basic code using the concept of menu driven programming.


### Steps

1.Created a class named Account.
2.Added Attributes for balance,name,type of account and account number.
3.Added following Methods
  ~Create Account    //function to get data from user
  ~Show Account       //function to show data on screen
  ~Modify         //function to add new data
  ~Deposit       //function to accept amount and add to balance amount
  ~Draw Money    //function to accept amount and subtract from balance amount
  ~Report    //function to show data in tabular format
  ~Return Account Number    //function to return account number
  ~Return Balance    //function to return balance
  ~Return Type     //function to return type of account
  
  For all methods access specifier is Public as they have to be called by driver function which is outside the class.
  
  4.Then driver function is written which calls these functions to do various tasks.
  ~In driver function ,we create a array of instances of class for mangaging data of various customers.
  ~Then,we use do while loop to provide choice to the user as once the choice has to b asked without any condition.
  ~based on various choices the program performs the task.
  ~the condition to exit the loop is same as the conditon used to exit i.e ch=7 .
  
  



## Resources 

https://www.geeksforgeeks.org/c-classes-and-objects/

https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/

https://www.geeksforgeeks.org/access-modifiers-in-c/

