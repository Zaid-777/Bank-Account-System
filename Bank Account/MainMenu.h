#include"stdafx.h"		//
#include<iostream>		//
#include<sstream>		//
#include<string>		//
#include<iomanip>		//
#include<conio.h>		//
#include"logo.h"		//
#include"Account.h"		//
#include"Bar.h"			//
using namespace std;


int main()//
{
	system("mode 112");//Console Window Size 
	logo();//HBL Logo Function Call Through Header File.
	system("color 2f");// Console Text Colour
	Account acc;//Object of class Account.
	int choice; //Variables for Switch 
	string ch;//Variable for External Do_While
	
	do{
	
	while(1)
	{
		system("cls");
		cout<<setw(61)<<setfill('*')<<"{ MAIN MENU }"<<setw(51)<<setfill('*')<<"";
		Time();
		cout<<"\n\n\t\t\t\t\t\t(1)-NEW ACCOUNT."
		<<"\n\n\n\t\t\t\t\t\t(2)-DEPOSIT AMOUNT."
		<<"\n\n\n\t\t\t\t\t\t(3)-WITHDRAW AMOUNT."
		<<"\n\n\n\t\t\t\t\t\t(4)-BALANCE ENQUIRY."
		<<"\n\n\n\t\t\t\t\t\t(5)-ALL ACCOUNTS LIST."
		<<"\n\n\n\t\t\t\t\t\t(6)-CLOSE AN ACCOUNT."
		<<"\n\n\n\t\t\t\t\t\t(7)-MODIFY AN ACCOUNT."
		<<"\n\n\n\t\t\t\t\t\t(8)-ALL ACCOUNTS DELETED."
		<<"\n\n\n\t\t\t\t\t\t(9)-Exit.";
		cout<<"\n\n\n\t\t\t\t\t\tEnter Your Choice(1-9) -> ";
		string str;
		cin>>str;
		
		bool bValid=true;
		
		for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
				if(!isdigit(str[nIndex]))
				{
					bValid = false;
				}
			if(!bValid)
			{
				continue;
			}
			stringstream strStream;
			strStream << str;
			strStream >> choice;
			
			if(choice > 9 )
			{
				continue;
			}
			if(choice <= 0 )
			{
				continue;
			}
		break;
	}
	switch(choice)
	{
		case 1:
			{
				acc.Input_Function();
			}
			break;
		
		case 2:
			{
				long long Account_A;
				while(1)
				{
					system("cls");
					cout<<setw(71)<<setfill('*')<<"{ ACCOUNT TRANSCATION FORM }"<<setw(41)<<setfill('*')<<"\n";
					Time();
					cout<<"\n\nEnter the Account No. ";
					string str;
					cin>>str;
		
					bool bValid=true;
		
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						if(!bValid)
						{
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> Account_A;
			
						if(Account_A > 9999999999999999 )
						{
							continue;
						}
						if(Account_A <=0 )
						{
							continue;
						}
					break;
				}
				acc.Check_Account_Not_Exist(Account_A);
				acc.Accounts_Depo_Widro(Account_A);
				acc.Deposit_Amount(Account_A);
			}
			break;
		
		case 3:
			{

				long long Account_B;
				while(1)
				{
					system("cls");
					cout<<setw(71)<<setfill('*')<<"{ ACCOUNT TRANSCATION FORM }"<<setw(41)<<setfill('*')<<"\n";
					Time();
					cout<<"\n\nEnter the Account No. ";
					string str;
					cin>>str;
		
					bool bValid=true;
		
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						if(!bValid)
						{
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> Account_B;
			
						if(Account_B > 9999999999999999 )
						{
							continue;
						}
						if(Account_B <=0 )
						{
							continue;
						}
					break;
				}
				acc.Check_Account_Not_Exist(Account_B);
				acc.Accounts_Depo_Widro(Account_B);
				acc.Withdraw_Amount(Account_B);
			}
			break;
		
		case 4:
			{
				long long Account_C;
				while(1)
				{
					system("cls");
					cout<<setw(71)<<setfill('*')<<"{ ACCOUNT BALANCE DETIALS }"<<setw(41)<<setfill('*')<<"\n";
					Time();
					cout<<"\n\nEnter the Account No. ";
					string str;
					cin>>str;
		
					bool bValid=true;
		
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						if(!bValid)
						{
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> Account_C;
			
						if(Account_C > 9999999999999999 )
						{
							continue;
						}
						if(Account_C <=0 )
						{
							continue;
						}
					break;
				}
				acc.Check_Account_Not_Exist(Account_C);
				acc.Accounts_Balance_Enquiry(Account_C);
			}
			break;
		
		case 5:
			{
				system("cls");
				cout<<setw(71)<<setfill('*')<<"{ ACCOUNT HOLDER LIST }"<<setw(41)<<setfill('*')<<"\n";
				acc.All_Accounts_Holder_List();
			}
			break;
		
		case 6:
			{
				long long Account_D;			
				while(1)
				{
					system("cls");
					cout<<setw(71)<<setfill('*')<<"{ ACCOUNT DELETE RECORDS }"<<setw(41)<<setfill('*')<<"\n";
					Time();
					cout<<"\n\nEnter The Account NO. for Deleting : ";
					string str;
					cin>>str;
		
					bool bValid=true;
		
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						if(!bValid)
						{
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> Account_D;
			
						if(Account_D > 9999999999999999 )
						{
							continue;
						}
						if(Account_D <=0 )
						{
							continue;
						}
					break;
				}
				acc.Check_Account_Not_Exist(Account_D);
				acc.Accounts_Depo_Widro(Account_D);
				cout<<"\n\n";
				acc.Delete_Account(Account_D);
			}
			break;
		
		case 7:
			{
				long long Account_E;
				while(1)
				{
					system("cls");
					cout<<setw(71)<<setfill('*')<<"{ ACCOUNT MODIFY RECORDS }"<<setw(41)<<setfill('*')<<"\n";
					Time();
					cout<<"\n\nEnter the Account No. for Modify : ";
					string str;
					cin>>str;
		
					bool bValid=true;
		
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						if(!bValid)
						{
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> Account_E;
			
						if(Account_E > 9999999999999999 )
						{
							continue;
						}
						if(Account_E <=0 )
						{
							continue;
						}
					break;
				}
				acc.Check_Account_Not_Exist(Account_E);
				acc.Accounts_Balance_Enquiry(Account_E);
				acc.Modify_Account(Account_E);
			}
			break;
		case 8:
			{
				system("cls");
				cout<<setw(71)<<setfill('*')<<"{ ALL ACCOUNTS DELETED }"<<setw(41)<<setfill('*')<<"\n";
				acc.All_Account_Delete();
			}
			break;
		case 9:
			{
				Bar();
				exit(0);
			}
			break;
		default:
			{
				system("cls");
				cout<<"\n\nYour Entered Instruction Invalid!!!.";
			}
	}

	ab:
	cout<<"\n\n\nEnter 'Y' to MAIN MENU &\nEnter 'N' to EXIT Program\t:\t";
	cin>>ch;
	if(ch != "Y" && ch != "y" && ch != "N" && ch != "n")
	{
		cin.clear();
		cin.ignore();
		goto ab;
	}
	if(ch == "N" || ch == "n")
	{
		Bar();
	}
}while(ch != "n" && ch!= "N");
return 0;
}

