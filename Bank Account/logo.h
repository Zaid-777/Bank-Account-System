# include <iostream>
# include <conio.h>
using namespace std;

void logo ()
{
	system("cls");
	system("color 2f");
	system("mode 112");
	
	int a = 219;
	char c = a;
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	for(int i=1; i<=11; i++)
	{
		cout<<"\t\t\t\t";
		for (int j=1; j<=48; j++)
		{
			if((i==1 && j==1)||(i==1 && j==2)||(i==1 && j==3)||(i==1 && j==11)||(i==1 && j==12)||(i==1 && j==13)||(i==1 && j==17)||(i==1 && j==18)||
			(i==1 && j==19)||(i==1 && j==20)||(i==1 && j==21)||(i==1 && j==22)||(i==1 && j==23)||(i==1 && j==24)||(i==1 && j==25)||(i==1 && j==31)||
			(i==1 && j==32)||(i==1 && j==33)||
			
			(i==2 && j==1)||(i==2 && j==2)||(i==2 && j==3)||(i==2 && j==11)||(i==2 && j==12)||(i==2 && j==13)||(i==2 && j==17)||(i==2 && j==18)||
			(i==2 && j==19)||(i==2 && j==25)||(i==2 && j==26)||(i==2 && j==31)||(i==2 && j==32)||(i==2 && j==33)||
			
			(i==3 && j==1)||(i==3 && j==2)||(i==3 && j==3)||(i==3 && j==11)||(i==3 && j==12)||(i==3 && j==13)||(i==3 && j==17)||(i==3 && j==18)||
			(i==3 && j==19)||(i==3 && j==26)||(i==3 && j==27)||(i==3 && j==31)||(i==3 && j==32)||(i==3 && j==33)||
			
			(i==4 && j==1)||(i==4 && j==2)||(i==4 && j==3)||(i==4 && j==11)||(i==4 && j==12)||(i==4 && j==13)||(i==4 && j==17)||(i==4 && j==18)||
			(i==4 && j==19)||(i==4 && j==26)||(i==4 && j==27)||(i==4 && j==31)||(i==4 && j==32)||(i==4 && j==33)||
			
			(i==5 && j==1)||(i==5 && j==2)||(i==5 && j==3)||(i==5 && j==11)||(i==5 && j==12)||(i==5 && j==13)||(i==5 && j==17)||(i==5 && j==18)||
			(i==5 && j==19)||(i==5 && j==25)||(i==5 && j==26)||(i==5 && j==31)||(i==5 && j==32)||(i==5 && j==33)||
			
			(i==6 && j==1)||(i==6 && j==2)||(i==6 && j==3)||(i==6 && j==4)||(i==6 && j==5)||(i==6 && j==6)||(i==6 && j==7)||(i==6 && j==8)||
			(i==6 && j==9)||(i==6 && j==10)||(i==6 && j==11)||(i==6 && j==12)||(i==6 && j==13)||(i==6 && j==17)||(i==6 && j==18)||(i==6 && j==19)||
			(i==6 && j==20)||(i==6 && j==21)||(i==6 && j==22)||(i==6 && j==23)||(i==6 && j==24)||(i==6 && j==25)||(i==6 && j==31)||(i==6 && j==32)||
			(i==6 && j==33)||
			
			(i==7 && j==1)||(i==7 && j==2)||(i==7 && j==3)||(i==7 && j==11)||(i==7 && j==12)||(i==7 && j==13)||(i==7 && j==17)||(i==7 && j==18)||
			(i==7 && j==19)||(i==7 && j==25)||(i==7 && j==26)||(i==7 && j==31)||(i==7 && j==32)||(i==7 && j==33)||
			
			(i==8 && j==1)||(i==8 && j==2)||(i==8 && j==3)||(i==8 && j==11)||(i==8 && j==12)||(i==8 && j==13)||(i==8 && j==17)||(i==8 && j==18)||
			(i==8 && j==19)||(i==8 && j==26)||(i==8 && j==27)||(i==8 && j==31)||(i==8 && j==32)||(i==8 && j==33)||
			
			(i==9 && j==1)||(i==9 && j==2)||(i==9 && j==3)||(i==9 && j==11)||(i==9 && j==12)||(i==9 && j==13)||(i==9 && j==17)||(i==9 && j==18)||
			(i==9 && j==19)||(i==9 && j==26)||(i==9 && j==27)||(i==9 && j==31)||(i==9 && j==32)||(i==9 && j==33)||
			
			(i==10 && j==1)||(i==10 && j==2)||(i==10 && j==3)||(i==10 && j==11)||(i==10 && j==12)||(i==10 && j==13)||(i==10 && j==17)||
			(i==10 && j==18)||(i==10 && j==19)||(i==10 && j==25)||(i==10 && j==26)||(i==10 && j==31)||(i==10 && j==32)||(i==10 && j==33)||
			
			(i==11 && j==1)||(i==11 && j==2)||(i==11 && j==3)||(i==11 && j==11)||(i==11 && j==12)||(i==11 && j==13)||(i==11 && j==17)||
			(i==11 && j==18)||(i==11 && j==19)||(i==11 && j==20)||(i==11 && j==21)||(i==11 && j==22)||(i==11 && j==23)||(i==11 && j==24)||
			(i==11 && j==25)||(i==11 && j==31)||(i==11 && j==32)||(i==11 && j==33)||(i==11 && j==34)||(i==11 && j==35)||(i==11 && j==36)||
			(i==11 && j==37)||(i==11 && j==38)||(i==11 && j==39)||(i==11 && j==40)||(i==11 && j==41))
			
			{
				cout<<c;
			}
			else
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\t\t\t\t   ACCOUNTS     MANAGEMENT     SYSTEM";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Made By:";
	cout<<"\n\t\t\t\t\t\t\t\t HASSAN BIN SALIM \t\t 17281519-058";
	cout<<"\n\t\t\t\t\t\t\t\t HAFIZ ZAID BIN KHALID \t\t 17281519-075\n";
	
	system("pause");
}
