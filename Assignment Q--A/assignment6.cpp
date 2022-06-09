#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
    
	for(int i=1,k=1;i<=n;i++,k=1)
	{
		for(int s=1;s<=(n-i);s++)
		{
			cout<<" ";
		}
		while( k!=(i*2)-1)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	return 0;
}
