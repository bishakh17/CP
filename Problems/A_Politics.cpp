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
    string s; cin>>s;
    vector<int> v(n,1);
    string s2;
    for(int i = 1; i<n; i++){
        cin>>s2;
        if(s2!=s) v[i] = 0;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==1) ans++;
    }
    cout<<ans<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}