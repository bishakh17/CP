#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    set<int> s;
    queue<pair<int,int>> q;
    q.push({x,0});
    s.insert(x);
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        int digits = 0;
        int temp = curr.first;
        while(temp){
            int rem = temp%10;
            digits++;
            if(rem>1 and s.find(curr.first*rem)==s.end()){
                q.push({curr.first*rem,curr.second+1});
                s.insert(curr.first*rem);
            }
            temp/=10;
        }
        if(digits==n){
            cout(curr.second);
            return;
        }
    }
    cout(-1);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}