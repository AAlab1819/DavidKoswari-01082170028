#include <iostream>

using namespace std;

int main()
{
    int n, l;
    cin>>n>>l;

    long long p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    long long temp;
    for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
    double rad=max(p[0],l-p[n-1]);
	for(int i=0;i<n;i++)
	{
	    rad=max(rad,(p[i]-p[i-1])/2.0);
	}
	printf("%.101f\n",rad);
    return 0;
}

//source code from CalvindoChandra-01082170037//
