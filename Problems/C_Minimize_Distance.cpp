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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(), v.end());
    int i = n-1;
    int ans = 0;
    while(i>=0 and v[i]>0){
        ans+=v[i];
        if(i!=n-1) ans+=v[i];
        i-=k;
    }
    i = 0;
    while(i<n and v[i]<0){
        ans-=v[i];
        if(i!=0) ans-=v[i];
        i+=k;
    }
    if(v[0]<0 and v[n-1]>0) ans+=min(abs(v[0]), v[n-1]);
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}