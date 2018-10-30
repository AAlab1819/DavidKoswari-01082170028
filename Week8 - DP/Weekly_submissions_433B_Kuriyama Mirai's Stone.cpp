#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int k=0;
	for(int i=1;i<n;i++)
	{
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	int x,y,z,r;
	cin>>x;
	while(x--)
	{
		cin>>y>>z>>r;
		if(y==1)
		{
			cout<<a[r-1]-((z-2>=0)?a[z-2]:0)<<endl;
		}
		else
		{
			cout<<b[r-1]-((z-2>=0)?b[z-2]:0)<<endl;
		}
	}
	return 0;
}
