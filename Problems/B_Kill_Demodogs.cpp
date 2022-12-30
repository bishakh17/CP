#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void solve(){
    int m = 1e9+7;
    int n; cin>>n;
    int ans = (n*(n+1))%m;
    ans = (ans*(4*n-1))%m;
    ans = (ans*337)%m;
    
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