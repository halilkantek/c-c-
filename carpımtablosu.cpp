#include <iostream>
using namespace std;
int main()
{
	int i,n,k,m=0;
	cout<<"kac satir olsun:";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		cout<<endl;
			for(k=1; k<=i; k++)
		{
			m=i*k;
				cout<<m<<"\t";
		}
		
	}
}
