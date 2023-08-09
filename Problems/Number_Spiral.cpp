#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x,y; cin>>x>>y;
    int gg = max(x,y);
    int ans = (gg-1)*(gg-1);
    if(gg%2){
        if(x==gg) ans+=y;
        else ans+=2*gg-x;
    }
    else{
        if(y==gg) ans+=x;
        else ans+=2*gg-y;
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