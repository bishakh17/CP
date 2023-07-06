#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int temp = __gcd(x,y);
    x/=temp;
    y/=temp;
    int gg = min(a/x,b/y);
    cout(gg);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}