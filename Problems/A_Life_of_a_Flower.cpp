#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = 1;
    if(v[0]==1) ans++;
    for(int i = 1; i<n; i++){
        if(v[i]==0 and v[i-1]==0){cout(-1); return;}
        else if(v[i]==1 and v[i-1]==1) ans+=5;
        else if(v[i]==1 and v[i-1]==0) ans++;
    }
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