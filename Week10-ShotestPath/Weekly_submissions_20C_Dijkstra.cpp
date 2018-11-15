#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,int> ii;
ll INF = 1e18;

int x, y, z[100005];
ll d[100005];
vector<ii> g[100005];

void tr(int x){if(z[x]+1) tr(z[x]); cout << x+1 << ' ';}

int main(){
	cin >> x >> y;
	while(y--){
		int u, v, l; cin >> u >> v >> l;
		g[--u].push_back({l, --v});
		g[v].push_back({l, u});
	}
	for(int i=0;i<x;i++) {z[i] = -1; d[i] = INF;}
	priority_queue<ii> q; q.push({d[0]=0, 0});
	while(!q.empty()){
		int u = q.top().second; q.pop();
		for(ii e: g[u]){
			int v = e.second; ll t = d[u] + e.first;
			if(t < d[v]) {q.push({-(d[v]=t), v}); z[v] = u;}
		}
	}
	if(z[x-1]+1) tr(x-1); else cout << -1;
	return 0;
}
