#include<iostream>
#include<string>



using namespace std;

class Account
{
   float balance;
   char type;
   string name;
   int accno;

   public:
   	Account()
   	{
   		balance=0;
   	}

   void create()
   {

   	cout<<"Enter account holder's name:\t";
    cin>>name;
   	cout<<"\n"<<"Enter type of account Savings(S) or Current(C):\t ";
   	cin>>type;
   	cout<<"\n"<<"Account number:\t";
   	cin>>accno;
   	cout<<"\n"<<"Enter opening balance:\t";
   	cin>>balance;
   	cout<<"\n"<<"Account created..\n\n";


   }
   void show() 
   {
      cout<<"\nAccount holder's name:"<<name<<endl;
      cout<<"\nType of account :"<<type<<endl;
      cout<<"\nAccount number:"<<accno<<endl;
      cout<<"\nInitial Balance:"<<balance<<endl;

   }

    int returnaccountnumber()
    {
    	return accno;

    }  

    float returnbalance()
    {
    	return balance;
    }  	

    void deposit(int deposit)
    {
    	
    	if(deposit>0)
    	{
    		balance=balance+deposit;
    	}
    	else
    	{
    		cout<<"Enter valid amount to be deposited"<<endl;
    	}
    	cout<<"\n Updated balance:"<<balance<<endl;
    }

    void draw(int wdraw)
    {
    	
    	if(wdraw>0 && wdraw<=balance)
    	{
    		balance=balance-wdraw;
    	}
    	else
    	{
    		cout<<"Enter valid amount to be withdrawn"<<endl;
    	}
    	cout<<"\n Updated balance:"<<balance<<endl;
    }

     char return_type()
     {
           return type;
     }

     void modify()
     {
     	cout<<"\nEnter new details of account"<<endl;
     	cout<<"\nAccount Number:"<<accno<<endl;
     	cout<<"\nEnter modified name:";
     	cin>>name;
     	cout<<"\nEnter modified type of account (S/C):";
     	cin>>type;
     	cout<<"\nEnter modified balance:";
     	cin>>balance;


     }

     void report()
     {

     	cout<<accno<<"\t\t"<<name<<"\t\t"<<type<<"\t\t"<<balance<<endl;

     }


     


	
};

int main()
     {
      int ch;
      int anum,i=0;int flag=0;
      Account obj[100];
      do
      {
        cout<<"\t\t\t\tBANK MANAGEMENT SYSTEM";
        cout<<"\n\t\t\t\t1.NEW ACCOUNT";
        cout<<"\n\t\t\t\t2. DEPOSIT AMOUNT";
        cout<<"\n\t\t\t\t3. WITHDRAW AMOUNT";
        cout<<"\n\t\t\t\t4. BALANCE ENQUIRY";
        cout<<"\n\t\t\t\t5. ALL ACCOUNT HOLDER LIST";
        cout<<"\n\t\t\t\t6. MODIFY AN ACCOUNT";
        cout<<"\n\t\t\t\t7. EXIT";
        cout<<"\n\n\t\t\t\tSelect Your Option (1-7): ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                   obj[i].create();i++;break;
            case 2:
                cout<<"\n\n\t\t\tEnter The account No. : ";
                 cin>>anum; flag=0;
                  for(int a=0;a<i;a++)
                  {
                    if(anum==obj[a].returnaccountnumber())
                    {
                      flag=1;
                      obj[a].show();
                      int deposit=0;
                        
                      cout<<"Enter deposit amount"<<endl;
                        cin>>deposit;
                      obj[a].deposit(deposit);
                      break;
                    }

                  }
                  if(flag==0)
                  {
                    cout<<"Please enter valid account number"<<endl;
                  }
                  break;
          case 3:
                cout<<"\n\n\t\t\tEnter The account No. : ";
                 cin>>anum; flag=0;
                  for(int a=0;a<i;a++)
                  {
                    if(anum==obj[a].returnaccountnumber())
                    {
                      flag=1;
                      obj[a].show();
                        int wdraw=0;
                        cout<<"\n Enter amount to be withdrawn"<<endl;
                        cin>>wdraw;
                      obj[a].draw(wdraw);
                      break;
                    }

                  }
                  if(flag==0)
                  {
                    cout<<"Please enter valid account number"<<endl;
                  }
                  break;
          case 4: cout<<"\n\n\t\t\tEnter The account No. : ";
                 cin>>anum; flag=0;
                  for(int a=0;a<i;a++)
                  {
                    if(anum==obj[a].returnaccountnumber())
                    {
                      flag=1;obj[a].show();
                      cout<<"Available Balance:"<<obj[a].returnbalance();
                      break;
                    }

                  }
                  if(flag==0)
                  {
                    cout<<"Please enter valid account number"<<endl;
                  }
                  break; 
          case 5: cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
                      cout<<"****************************************************\n";
                      cout<<"A/c no.      NAME           Type  Balance\n";
                      cout<<"----------------------------------------------------\n"; 
                      if(i==0)
                      {
                        cout<<"There are no accounts in this bank"<<endl;
                      }
                      else
                      {
              for(int a=0;a<i;a++)
                        {
                  obj[a].report();
                        }   
                      } 
                      break;
          case 6:cout<<"\n\n\t\t\tEnter The account No. : ";
                 cin>>anum;flag=0;
                  for(int a=0;a<i;a++)
                  {
                    if(anum==obj[a].returnaccountnumber())
                    {
                      flag=1;
                      obj[a].show();
                      obj[a].modify();
                      break;
                    }

                  }
                  if(flag==0)
                  {
                    cout<<"\nPlease enter valid account number"<<endl;
                  }
                  break;
          case 7:cout<<"\nThank You!..\n"<<endl ;
                  break;

        }
      }while(ch!=7);
      return 0;
     }
