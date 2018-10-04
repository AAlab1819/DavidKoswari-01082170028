#include <iostream>
using namespace std;

    int n,p[1005],a[1005],b[1005],i;

int main()
{
    cin>>n;
    for(i=2;i<=n;i++)
        cin>>p[i];
    for(i=n;i>=1;i--)
        {
            b[p[i]]=1;if(b[i])
        {
        if(a[i]<3)
        return puts("NO"),0;
        }
    else
        a[p[i]]++;
    }
    puts("YES");
}
return 0;
	   	 	//source code: http://codeforces.com/contest/913/submission/34602608
