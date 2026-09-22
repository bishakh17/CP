#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    string s; cin>>s;
    priority_queue<int, vector<int>, greater<int>> pq;
    char prev = '-1';
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != prev){
            pq = {};
            pq.push(a[i]);
            ans += a[i];
            prev = s[i];
        }
        else if(pq.size() < k){
            pq.push(a[i]);
            ans += a[i];
        }
        else if(pq.size() == k && a[i] > pq.top()){
            ans -= pq.top();
            pq.pop();
            pq.push(a[i]);
            ans += a[i];
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}