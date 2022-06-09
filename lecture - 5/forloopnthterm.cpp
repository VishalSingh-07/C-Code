#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin>>n;
	int a=3;
	int d=8;
	int Tn=0;
	int Sn=0;
	for (int i=1;i<=n; i++)
	{	Tn=a +((i-1)*d);
	cout<<"Term "<<i<<" = "<<Tn<<endl;
	Sn=Sn+Tn;
    }
    cout<<"Sum = "<<Sn<<endl;
    return 0;
}