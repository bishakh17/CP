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
    for(int i=0;i<n;i++) cin>>a[i];
    priority_queue<int> pq;
    int sum = 0;
    for(int i = 1; i<n; i++){
        int temp = a[i] - a[i-1];
        pq.push(temp);
        sum += temp;
    }
    k--;
    while(k--){
        int temp = pq.top();
        pq.pop();
        sum -= temp;
    }
    cout(sum);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}