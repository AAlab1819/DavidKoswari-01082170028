#include<bits/stdc++.h>
using namespace std;

const int N=1005;
int a,b,dis[N],dp[N][N];

int bfs(int u){
	queue<int>q;
	memset(dis,-1,sizeof(dis));
	dis[1]=0;
	q.push(1);

	while(!q.empty()) {
		int x=q.front();
		q.pop();
		for(int i=1;i<=a;i++){
			if(dp[x][i]==u&&dis[i]==-1){
				dis[i]=dis[x]+1;
				q.push(i);
			}
		}
	}
	return dis[a];
}

int main(){
	cin>>a>>b;
	int x,y;
	for(int i=0;i<b;i++){
		cin>>x>>y;
		dp[x][y]=dp[y][x]=1;
	}
	cout<<bfs(1-dp[1][a])<<endl;
	return 0;
}
