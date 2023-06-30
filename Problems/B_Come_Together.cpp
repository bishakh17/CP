#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int xa,ya,xb,yb,xc,yc; cin>>xa>>ya>>xb>>yb>>xc>>yc;
    xb-=xa; yb-=ya; xc-=xa; yc-=ya;
    int ans = 1;
    if(xb*xc>0) ans += min(abs(xb),abs(xc));
    if(yb*yc>0) ans += min(abs(yb),abs(yc));
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