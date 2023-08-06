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
    int mini = INT64_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mini = min(mini, a[i]);
    }
    vector<int> temp(2e5+1,0);
    for(int i = 0; i<n; i++){
        temp[a[i]]++;
    }
    for(int i = 2e5-1; i>=mini; i--){
        temp[i] += temp[i+1];
    }
    int cost = 0;
    int ans = 0;
    for(int i = 2e5; i>mini; i--){
        if(cost+temp[i]<=k) cost+=temp[i];
        else{
            cost = temp[i];
            ans++;
        }
    }
    if(cost>0) ans++;
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