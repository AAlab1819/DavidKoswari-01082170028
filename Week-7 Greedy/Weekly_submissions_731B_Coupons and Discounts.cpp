#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,r=0;
	cin>>n;
	while(n--){
		cin>>t;
		if(0>(t-=r))break;
		r=t%2;
	}
	cout<<(r?"NO":"YES")<<endl;
}

//source code: http://codeforces.com/contest/731/submission/30856435
