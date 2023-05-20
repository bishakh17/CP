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
    vector<int> x(n);
    int maxi = 0;
    for(int i = 0; i<n; i++){
        cin>>x[i];
        maxi = max(maxi,x[i]);
    }
    int a; cin>>a;
    vector<int> c(n);
    for(int i = 0; i<n; i++) cin>>c[i];
    if(maxi<k){cout(0); return;}
    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;
    for(int i = 0; i<n; i++){
        pq.push(c[i]);
        while(!pq.empty() and x[i]>k){
            int curr = pq.top();
            pq.pop();
            k+=a;
            ans+=curr;
        }
        if(x[i]>k){cout(-1); return;}
    }
    cout(ans);


}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}