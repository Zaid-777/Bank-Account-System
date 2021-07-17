#include "iostream"
#include "ctime"
#pragma warning(disable : 4996)
using namespace std;

void Time()
{
	time_t tt;
	struct tm * ti;
	time (&tt);
	ti = localtime(&tt);
 
	cout<<"\n\n\n\n\n\t\t\t\tCurrent ( Time  &  Date ) : "<< asctime(ti);
	cout<<"\n\n\n\n";
}
