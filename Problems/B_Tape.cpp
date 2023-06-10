#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int sum = 0;
    priority_queue<int> pq;
    for(int i = 1; i<n; i++){
        pq.push(a[i]-a[i-1]);
        sum += a[i]-a[i-1];
    }
    int gg = k;
    k--;
    while(k--){
        int curr = pq.top();
        pq.pop();
        sum -= curr;
    }
    cout<<sum+gg<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}