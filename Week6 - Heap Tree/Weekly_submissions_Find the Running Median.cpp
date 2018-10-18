#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,a,sum;
    cin >> n;
    multiset<int>mn,mx;
    for(int i = 0;i<n;i++){
       cin >> a;
           mx.insert(a);
           if(mn.size()>0){
               if(mx.size()==mn.size()+1){
                int b=*(--mn.end());
                if(*mx.begin()<b){
                   mx.erase(mx.find(*mx.begin()));
                   mx.insert(b);
                   mn.erase(mn.find(b));
                   mn.insert(a);
               }
              }
               else{
                   mn.insert(*mx.begin());
                   mx.erase(mx.find(*mx.begin()));
               }
           }
        else{
           if(mx.size()>1){
               mn.insert(*mx.begin());
               mx.erase(mx.find(*mx.begin()));
           }
        }
        if(mn.size()+1==mx.size()||mn.size()==0){
            sum=*mx.begin();
            cout<<sum<<".0\n";
        }
            else{
             sum=*mx.begin()+*(--mn.end());
             cout<<sum/2;
             if(sum%2)cout<<".5\n";
             else cout<<".0\n";
            }
       }
    return 0;
}

//source code: https://www.hackerrank.com/rest/contests/master/challenges/ctci-find-the-running-median/hackers/Ahmed_Morsy/download_solution//
