#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,c; cin>>a>>b>>c;
    int maxi = max(a,c);
    int mini = min(a,c);
    int sm = a+b+c;
    if(sm%3) sm = sm/3 + 1;
    else sm = sm/3;
    if(b>maxi){cout(sm); return;}
    if(maxi>2*sm){if(maxi%2) cout(maxi/2+1); else cout(maxi/2); return;}
    else{
        if(mini<sm) {b = b - (sm-mini); mini = sm;}
        int ans = b+maxi;
        if(ans%2) ans = ans/2+1;
        else ans = ans/2;
        cout(max(mini,ans));
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}