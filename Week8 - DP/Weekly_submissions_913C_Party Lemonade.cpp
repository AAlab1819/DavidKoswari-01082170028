#include <bits/stdc++.h>
using namespace std;

long long n,x,z,a[35],i,y,r=1e18;

int main()
{
    cin>>n>>x;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
            if(i)a[i]=min(a[i-1]*2,a[i]);
        }
        for(i=n-1;i>=0;i--)
            {
                z=(1<<i);
                y+=a[i]*(x/z);
                x%=z;
                r=min(r,y+(x!=0)*a[i]);
            }
    cout<<r;
}
