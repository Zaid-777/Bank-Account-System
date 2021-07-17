#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string>
#include"Time.h"
using namespace std;


class List				//
{
	friend class Account;
	private:	
		long long	Reg_No,			Deposit;
		string		Customer_Name,	Father_Name,	Phone_No,	Type,	Occopation,		Address,	CNIC_No	,	Email;
		List		*next;
};

class Account			//
{
	private:
		long long reg,dep;
		string type,cn,fn,eml,ph_no,cnic,occo,adrss;
		List	*head;
		List	*tail;
	public:
		Account():head(NULL),tail(NULL),reg(0),dep(0)
		{}
		
		
		void Input_Function()
		{
			string choic;
			do
			{
				system("cls");
				cout<<"\a\a\a\a";
				cout<<setw(71)<<setfill('*')<<"{ NEW ACCOUNT ENTRY FORM }"<<setw(41)<<setfill('*')<<"\n";
				Time();
				while(1)
				{
					cout<<"\n\nEnter New Account No.(Max 16 Digits)\t:\t";
					string str;
					cin>>str;

					bool bValid=true;
					for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
		
					{	
						if(!isdigit(str[nIndex]))
						{
							bValid = false;
						}
					}
						if(!bValid)
						{
							cout<<"\n\nINPUT ERROR : Please Enter Only Numeric Data Type!!!\n";
							continue;
						}
						stringstream strStream;
						strStream << str;
						strStream >> reg;

						if( Check_Account_Same(reg) == true )
						{
							cout<<"\n\nThat Account Number Already Exist!!!\n\n\t|| Please Try Again ||\n";
							continue;
						}
							
						if( reg > 9999999999999999 )
						{
							cout<<"\n\nINPUT ERROR : You Entered Account No. More Than 16 Digit!!!\n";
							continue;
						}

						if( reg <= 0 )
						{
							cout<<"\n\nINPUT ERROR : You Entered Wrong Account No.!!!\n";
							continue;
						}
						break;
				} 

					cout<<"\n\n";
					cout<<setw(112)<<setfill('=')<<"\n";
				

					a1g:
					cout<<"\n\nEnter Type of The Account (PLS / C)\t:\t";
					cin>>type;
					if(type != "c" && type != "C" 
						&& type != "PLS" && type != "pls")
					{
						cin.clear();
						cin.ignore();
						goto a1g;
					}
					
					while(1)
					{
						cout<<"\n\nEnter Initial Amount(Minimum Rs.1000)\t:\t";
						string str;
						cin>>str;

						bool bValid=true;
						for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
						{	
							if(!isdigit(str[nIndex]))
							{
								bValid = false;
							}
						}
							if(!bValid)
							{
								cout<<"\n\nINPUT ERROR : Please Enter Only Numeric Data Type!!!\n";
								continue;
							}
							stringstream strStream;
							strStream << str;
							strStream >> dep;
							
							if(dep > 9999999999999999 )
							{
								cout<<"\n\nINPUT ERROR : You Entered Amount More Than Rs.9999999999999999/-!!!\n";
								continue;
							}
							if(dep < 1000 )
							{
								cout<<"\n\nINPUT ERROR : You Entered Wrong Amount/-.!!!\n";
								continue;
							}
							
							break;
					}


					cout<<"\n\n";
					cout<<setw(112)<<setfill('=')<<"\n";

					cin.ignore();
					while(1)
					{
						cout<<"\nEnter the Account Holder Name\t\t:\t";
						
						getline(cin,cn);
		
						bool b=false;
		
						for(unsigned int n = 0; n <cn.length() && !b; n++)
						{
							if(isalpha(cn[n]))
							{
								continue;
							}
							if(!isalpha(cn[n]) && cn[n] != ' ')
							{
								cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
							}
			
							if(cn[n] == ' ')
							{
								continue;
							}
			
							b = true;
						}
						if(!b)
						{
							break;
						}
					}

					
					while(1)
					{
						cout<<"\nEnter the Father's Name\t\t\t:\t";
						getline(cin,fn);
		
						bool b=false;
		
						for(unsigned int n = 0; n <fn.length() && !b; n++)
						{
							if(isalpha(fn[n]))
							{
								continue;
							}
							if(!isalpha(fn[n]) && fn[n] != ' ')
							{
								cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
							}
			
							if(fn[n] == ' ')
							{
								continue;
							}
			
							b = true;
						}
						if(!b)
						{
							break;
						}
					}

					while(1)
					{
						cout<<"\nEnter the CNIC No.(xxxxx-xxxxxxx-x)\t:\t";
						getline(cin,cnic);
						
						if(InputString(cnic,"#####-#######-#"))
						{
							break;
						}
					}
					
					
					while(1)
					{
						cout<<"\nEnter the Occopation\t\t\t:\t";
						getline(cin,occo);
		
						bool b=false;
		
						for(unsigned int n = 0; n < occo.length() && !b; n++)
						{
							if(isalpha(occo[n]))
							{
								continue;
							}
							if(!isalpha(occo[n]) && occo[n] != ' ')
							{
								cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
							}
			
							if(occo[n] == ' ')
							{
								continue;
							}
			
							b = true;
						}
						if(!b)
						{
							break;
						}
					}


					cout<<"\nEnter the Address\t\t\t:\t";
					getline(cin,adrss);
					
					
					while(1)
					{
						cout<<"\nEnter the Phone No.(+92)xxx-xxxxxxx\t:\t";
						getline(cin,ph_no);
						if(InputString(ph_no,"###-#######"))
						{
							break;
						}
					}
					
					cout<<"\nEnter Email Account(xxxxx@gmail.com)\t:\t";
					getline(cin,eml);

					cout<<"\n\n";
					cout<<setw(112)<<setfill('=')<<"\n";
					
					Account_Data(reg,cn,fn,cnic,occo,adrss,ph_no,eml,type,dep);
					
					b:
					cout<<"\n\n\n\t\t\t\tEnter 'Y' to Create New Account & 'N' to Back -> ";
					cin>>choic;
					if(choic != "Y" && choic != "y" && choic != "N" && choic != "n")
					{
						cin.clear();
						cin.ignore();
						goto b;
					}
				}
				while(choic != "N" && choic != "n");
		}
		

		void Account_Data(long long REG,string CN,string FN,string CNIC,string OCCO,
			string ADRSS,string PH_NO,string EML,string TYPE,long long DEP)
		{
			List	*temp		=	new List;
			temp->Reg_No		=	REG;
			temp->Customer_Name	=	CN;
			temp->Father_Name	=	FN;
			temp->CNIC_No		=	CNIC;
			temp->Occopation	=	OCCO;
			temp->Address		=	ADRSS;
			temp->Phone_No		=	PH_NO;
			temp->Email			=	EML;
			temp->Type			=	TYPE;
			temp->Deposit		=	DEP;
			temp->next			=	NULL;
			
			if(head == NULL)
			{
				head	=	temp;
				tail	=	temp;
				temp	=	NULL;
			}
			else
			{
				tail->next	=	temp;
					tail	=	temp;
			}
			cout<<"\n\n\t\t\t\t\tYour Account Created Successfully...";
		}
		

		void All_Accounts_Holder_List()
		{
			List	*t	=	head;
			if(t == NULL)
			{
				cout<<"\n\n\t\tAccount Not Exist!!!.";
			}
			else
			{
				while(t	!=	NULL)
				{
					cout<<"\n\n";
					cout<<setw(111)<<setfill('=')<<"";
					cout<<"\n\t\t\t\t\t\t  Account No. "	<<t->Reg_No<<endl;
					cout<<setw(113)<<setfill('=')<<"\n\n";
					cout<<"\nThe Type of Account is\t:\t"<<t->Type<<"."<<endl;
					cout<<"\nAccount Holder Name\t:\t"	<<t->Customer_Name<<"."<<endl;
					cout<<"\nFather's Name\t\t:\t"		<<t->Father_Name<<"."<<endl;
					cout<<"\nCNIC No.\t\t:\t("			<<t->CNIC_No<<")."<<endl;
					cout<<"\nOccopation\t\t:\t"			<<t->Occopation<<"."<<endl;
					cout<<"\nAddress\t\t\t:\t"			<<t->Address<<"."<<endl;
					cout<<"\nPhone No.\t\t:\t(+92)-"		<<t->Phone_No<<"."<<endl;
					cout<<"\nGmail Acccount\t\t:\t"		<<t->Email<<"."<<endl;
					cout<<"\nBalance Amount\t\t:\tRs."		<<t->Deposit<<" /-"<<endl;
					cout<<"\n\n";
					t	=	t->next;
				}
			}
		}
		
		
		void Deposit_Amount(long long Account_a)
		{
			List* t = head;
			
			while(t != NULL)
			{
					if(t->Reg_No == Account_a)
					{
						long long a;
						while(1)
						{
							cout<<"\n\nEnter the Amount to Deposit (Max 16 Digits) : ";
							string str;
							cin>>str;
		
							bool bValid=true;
		
							for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							{	
									if(!isdigit(str[nIndex]))
									{
										bValid = false;
									}
							}
									if(!bValid)
								{
									cout<<"\n\nINPUT ERROR : Please Enter Only Numeric Data Type!!!\n";
									continue;
								}
								stringstream strStream;
								strStream << str;
								strStream >> a;
								
								if(a > 9999999999999999 )
								{
									cout<<"\n\nINPUT ERROR : You Entered Amount More Than Rs.9999999999999999/-!!!\n";
									continue;
								}
								
								if(a < 0 )
								{
									cout<<"\n\nINPUT ERROR : You Entered Wrong Amount/-!!!\n";
									continue;
								}
								
								if((a + t->Deposit) > 9999999999999999 )
								{
									cout<<"\n\nINPUT ERROR : Your Current Amount is Larger than Rs.9999999999999999/-!!!\n";
									continue;
								}
							break;
						}
						t->Deposit += a;
						cout<<"\n\n\t\tRecord Updated Successfully...";  
					}
					t = t->next;
			}
		}
		

		void Withdraw_Amount(long long Account_b)
		{
			List* t = head;

			while(t != NULL)
				{
					if(t->Reg_No == Account_b)
					{
						long long b;
						while(1)
						{
							cout<<"\n\nEnter the Amount to Withdraw : ";
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
									cout<<"\n\nINPUT ERROR : Please Enter Only Numeric Data Type!!!\n";
									continue;
								}
								
								stringstream strStream;
								strStream << str;
								strStream >> b;
								
								if(t->Deposit < b)
								{
									cout<<"\n\nINPUT ERROR : Your Enter Amount is Greater Than Current Ammount!!!\n";
									continue;
								}

								if(b > 9999999999999999 )
								{
									cout<<"\n\nINPUT ERROR : You Entered Amount More Than Rs.9999999999999999/-!!!\n";
									continue;
								}

								if(b < 0 )
								{
									cout<<"\n\nINPUT ERROR : You Entered Wrong Amount/-!!!\n";
									continue;
								}
							break;
						}
						
						t->Deposit -= b;
						cout<<"\n\n\t\tRecord Updated Successfully...";
					}
					t = t->next;
				}
		}
		

		void Accounts_Balance_Enquiry(long long Account_c)
		{
			List	*t	=	head;
			if(t == NULL)
			{
				cout<<"\n\n\t\tAccount Not Exist!!!.";
			}
			else
			{
				while(t	!=	NULL)
				{
					if(t->Reg_No == Account_c)
					{
						cout<<"\n\t======Account Status======\n";
						cout<<"\a\a\a\a";
						cout<<"\n\nAccount No. "					<<t->Reg_No<<"."<<endl;
						cout<<"\n(1)-The Type of Account is\t:\t"	<<t->Type<<"."<<endl;
						cout<<"\n(2)-Account Holder Name\t\t:\t"	<<t->Customer_Name<<"."<<endl;
						cout<<"\n(3)-Father's Name\t\t:\t"			<<t->Father_Name<<"."<<endl;
						cout<<"\n(4)-CNIC No.\t\t\t:\t("			<<t->CNIC_No<<")."<<endl;
						cout<<"\n(5)-Occopation\t\t\t:\t"			<<t->Occopation<<"."<<endl;
						cout<<"\n(6)-Address\t\t\t:\t"				<<t->Address<<"."<<endl;
						cout<<"\n(7)-Phone No.\t\t\t:\t(+92)"		<<t->Phone_No<<"."<<endl;
						cout<<"\n(8)-Email Account\t\t:\t"			<<t->Email<<"."<<endl;
						cout<<"\n(9)-Balance Amount\t\t:\tRs."		<<t->Deposit<<" /-"<<endl;
					}
					t	=	t->next;
				}
			}
		}
		

		void Delete_Account(long long Account_d)
		{
			List *t1 = head;
			List *t2 = NULL;
			while(t1 != NULL)
			{
				if(t1->Reg_No == Account_d)
				{
					if(t2 == NULL)
					{
						head = t1->next;
					}
					else
					{
						t2->next = t1->next;
					}
					delete t1;
					cout<<"\n\n\t\tRecord Deleted Successfully...";
					break;
				}
				t2 = t1;
				t1 = t1->next;
			}
		}
		

		void Modify_Account(long long Account_e)
		{
			List* t = head;
			while(t != NULL)
			{
				if(t->Reg_No == Account_e)
				{
					cout<<"\n\n\n\t\t\t\t	=========Enter The New Detials========";
					cout<<"\n\n\t\t\t\t\t\t  Account No. "<<t->Reg_No<<endl;
					cout<<setw(112)<<setfill('=')<<"\n";
					int chao;
					do
					{
						while(1)
						{
							cout<<"\n\n\tEnter Number You Want Modify &\n\tEnter '0' to Stop -> ";
							string str;
							cin>>str;
							bool bValid=true;
							for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
							{	
								if(!isdigit(str[nIndex]))
								{
									bValid = false;
								}
							}
								if(!bValid)
								{
									continue;
								}
								stringstream strStream;
								strStream << str;
								strStream >> chao;

								if(chao > 9 )
								{
									continue;
								}
								if(chao < 0 )
								{
									continue;
								}
							break;
						} 

						switch(chao)
						{
							case 1:
							{
								aag:
								cout<<"\n\nModify Type of The Account (PLS / C)\t:\t";
								cin>>t->Type;
								if(t->Type != "c" && t->Type != "C" 
									&& t->Type != "PLS" && t->Type != "pls")
								{
									cin.clear();
									cin.ignore();
									goto aag;
								}
							}
							break;	
							case 2:
							{
								while(1)
								{
									cout<<"\n\nModify the Account Holder Name\t\t:\t";
									cin.ignore();
									getline(cin,t->Customer_Name);
		
									bool b=false;
		
									for(unsigned int n = 0; n <t->Customer_Name.length() && !b; n++)
									{
										if(isalpha(t->Customer_Name[n]))
										{
											continue;
										}
										if(!isalpha(t->Customer_Name[n]) && t->Customer_Name[n] != ' ')
										{
											cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
										}
			
										if(t->Customer_Name[n] == ' ')
										{
											continue;
										}
			
										b = true;
									}
									if(!b)
									{
										break;
									}
								}
							}
							break;
							case 3:
							{
								while(1)
								{
									cout<<"\nModify the Father's Name\t\t:\t";
									cin.ignore();
									getline(cin,t->Father_Name);
		
									bool b=false;
		
									for(unsigned int n = 0; n <t->Father_Name.length() && !b; n++)
									{
										if(isalpha(t->Father_Name[n]))
										{
											continue;
										}
										if(!isalpha(t->Father_Name[n]) && t->Father_Name[n] != ' ')
										{
											cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
										}
			
										if(t->Father_Name[n] == ' ')
										{
											continue;
										}
			
										b = true;
									}
									if(!b)
									{
										break;
									}
								}
							}
							break;
							case 4:
							{	
								cin.ignore();
								while(1)
								{
									cout<<"\nModify the CNIC No.(xxxxx-xxxxxxx-x)\t:\t";
									getline(cin,t->CNIC_No);
						
									if(InputString(t->CNIC_No,"#####-#######-#"))
									{
										break;
									}
								}
							}
							break;
							case 5:
							{		
								while(1)
								{
									cout<<"\nModify the Occopation\t\t\t:\t";
									cin.ignore();
									getline(cin,t->Occopation);
									bool b=false;
									for(unsigned int n = 0; n < t->Occopation.length() && !b; n++)
									{
										if(isalpha(t->Occopation[n]))
										{
											continue;
										}
										if(!isalpha(t->Occopation[n]) && t->Occopation[n] != ' ')
										{
											cout<<"\nINPUT ERROR : Please Use Alphabat Only!!!\n";
										}
			
										if(t->Occopation[n] == ' ')
										{
											continue;
										}
			
										b = true;
									}
									if(!b)
									{
										break;
									}
								}
							}
							break;
							case 6:
							{		
								cout<<"\nModify the Address\t\t\t:\t";
								cin.ignore();
								getline(cin,t->Address);
							}
							break;
							case 7:
							{
								cin.ignore();
								while(1)
								{
									cout<<"\nModify the Phone No.(+92)xxx-xxxxxxx\t:\t";
									getline(cin,t->Phone_No);
						
									if(InputString(t->Phone_No,"###-#######"))
									{
										break;
									}
								}
							}
							break;
							case 8:
							{		
								cout<<"\nModify Gmail Account(xxxxx@gmail.com)\t:\t";
								cin.ignore();
								getline(cin,t->Email);
							}
							break;
							case 9:
							{
								while(1)
								{
									cout<<"\nModify Balance Amount(Minimum Rs.1000)\t:\t";
									string str;
									cin>>str;

									bool bValid=true;
									for(unsigned int nIndex =0;nIndex < str.length();nIndex++ )
									{	
										if(!isdigit(str[nIndex]))
										{
											bValid = false;
										}
									}
										if(!bValid)
										{
											cout<<"\n\nINPUT ERROR : Please Enter Only Numeric Data Type!!!\n";
											continue;
										}
										stringstream strStream;
										strStream << str;
										strStream >> t->Deposit;
							
										if(t->Deposit > 9999999999999999 )
										{
											cout<<"\n\nINPUT ERROR : You Entered Amount More Than Rs.9999999999999999/-!!!\n";
											continue;
										}
										if(t->Deposit < 1000 )
										{
											cout<<"\n\nINPUT ERROR : You Entered Wrong Amount/-.!!!\n";
											continue;
										}
									break;
								}
							}
							break;
						}
					}
					while(chao != 0);
					cout<<"\n"<<setw(112)<<setfill('=')<<"\n";
					cout<<"\n\n\t\tRECORD UPDATED & MODIFY Successfully....";
				}
				t = t->next;
				
			}			
		}

		
		void Accounts_Depo_Widro(long long Account_ac)
		{
			List	*t	=	head;
			if(t == NULL)
			{
				cout<<"\n\n\t\tAccount Not Exist!!!.";
			}
			else
			{
				while(t	!=	NULL)
				{
					if(t->Reg_No == Account_ac)
					{
						cout<<"\n\t======Account Status======\n";
						cout<<"\a\a\a\a";
						cout<<"\n\nAccount No. "			<<t->Reg_No<<"."<<endl;
						cout<<"\nThe Type of Account is\t:\t"<<t->Type<<"."<<endl;
						cout<<"\nAccount Holder Name\t:\t"<<t->Customer_Name<<"."<<endl;
						cout<<"\nCNIC No.\t\t:\t("			<<t->CNIC_No<<")."<<endl;
						cout<<"\nPhone No.\t\t:\t(+92)"		<<t->Phone_No<<"."<<endl;
						cout<<"\nBalance Amount\t\t:\tRs."		<<t->Deposit<<" /-"<<endl;
					}
					t	=	t->next;
				}
			}
		}


		void All_Account_Delete()
		{
			List *t1 = head;
			List *t2 = NULL;
			if(t1 == NULL)
			{
				cout<<"\n\n\t\tAccount Not Exist!!!.";
			}
			else
			{
				while(t1 != NULL)
				{
					if(t1->Reg_No == t1->Reg_No)
					{
						if(t2 == NULL)
						{
							head = t1->next;
						}
						else
						{
							t2->next = t1->next;
						}
						delete t1;
						break;
						All_Account_Delete();
					}
     			}
				cout<<"\n\n\n\t\t\tAll Account Deleted Successfully.......\n\n";
			}
		}

		
		bool InputString(string strU, string strT)
		{
			if(strT.length() != strU.length())
			{
				return false;
			}
	
			for(unsigned int n=0; n < strT.length(); n++)
			{
				switch(strT[n])
				{
					case '#':
						{
							if(!isdigit(strU[n]))
							{
								return false;
							}
						}
						break;
					case '_':
						{
							if(!isspace(strU[n]))
							{
								return false;
							}
						}
						break;
					case '@':
						{
							if(!isalpha(strU[n]))
							{
								return false;
							}
						}
						break;
					case '?':
						break;
					default:
						{
							if(strU[n] != strT[n])
							{
								return false;
							}
						}
				}
		}
	
	return true;
}

		
		bool Check_Account_Same(long long cheq)
		{
			List* t1	=	head;
			bool check = false;
			while(t1 != NULL )
			{
				if(t1->Reg_No == cheq)
				{
					 check = true;
				}
				t1	=	t1->next;
			}
			if(check == true)
			{
				return true;
			}

		}

		
		void Check_Account_Not_Exist(long long cheq)
		{
			List* t1	=	head;
			bool check = false; 
			while(t1 != NULL )
			{
				if( t1->Reg_No == cheq )
				{
					 check = true;
				}
				t1	=	t1->next;
			}
			if( check == false)
			{
				cout<<"\n\n\t\tThat Account No. is Invalid!!!";
			}
		}
};