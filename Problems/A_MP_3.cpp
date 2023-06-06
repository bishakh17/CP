#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,I; cin>>n>>I;
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    a.resize(unique(a.begin(),a.end())-a.begin());
    int l = a.size();

    if(8*I>=n*ceil(log2(l))){cout<<0<<endl; return;}
    int k = pow(2,8*I/n);
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=mp[a[i]];
    }
    int ans = n-sum;
    for(int i=k;i<a.size();i++){
        sum+=mp[a[i]];
        sum-=mp[a[i-k]];
        ans = min(ans,n-sum);
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