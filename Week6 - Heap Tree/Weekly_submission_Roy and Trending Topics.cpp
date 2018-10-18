#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int v;
	cin>>v;
	priority_queue<pair<ll, int> > pq;
	map<int, ll> m;
	for(int i=0; i<v; i++)
	{
		ll id,oldNumber,w,z,x,y;
	    cin>>id>>oldNumber>>w>>x>>y>>z;
	    ll newNumber=(w*50)+(x*5)+(y*10)+(z*20);
	    ll change=newNumber-oldNumber;
	    m[id]=newNumber;
	    pq.push(make_pair(change, id));
	}
	for(int i=0; i<5; i++)
	{
		if(pq.empty())
		{
	       break;
	    }
	    pair<ll, int>val=pq.top();
	    cout<<val.second<<" "<<m[val.second]<<endl;
	    pq.pop();
	}
    return 0;
}

//source code: Steven-00000011580//
