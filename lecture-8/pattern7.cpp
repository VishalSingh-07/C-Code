#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the numbers of rows:";
	cin>>n;
	for(int i=1,k=0;i<=n;i++,k=0)
	{
		for(int s=1;s<=(n-i);s++)
		{
			cout<<" ";
		}
		while( k!=(i*2)-1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	for(int i=n-1,k=0;i>=1;i--,k=0)
	{
		for(int s=1;s<=(n-i);s++)
		{
			cout<<" ";
		}
		while( k!=(i*2)-1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	return 0;
}