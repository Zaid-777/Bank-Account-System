#include<iostream>
#include<iomanip>
using namespace std;
void Bar()
{
	int Horizental=222;//For Loading Bar.
	char hori = Horizental;//Integar into Charactor.
	//system("mode 360");//For Console Length.
	cout<<endl<<setw(114)<<setfill('_')<<"\n\n";
	for(int i=0;i<50;i++)
	{
		system("color 2f");
		cout<<hori;
	}
	cout<<"| LOADING |";
	for(int i=0;i<51;i++)
	{
		system("color 2f");
		cout<<hori;
	}
	cout<<endl<<setw(113)<<setfill('_')<<"\n";
}
