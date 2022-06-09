#include <iostream>

using namespace std;

int main()
{
	int a=0;
	while (a<10)
	{
		if (a==5)
			continue;
		cout<<a<<endl;
		a++;
	}	
	return 0;
}