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
    int j = 1;
    int t = 0;
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        if(x==j){j++;t++;}
    }
    int ans = (n-t)/k;
    if((n-t)%k)ans++;
    cout(ans);
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}