#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(a==0) {
        cout("1");
        return;
    }
    int ans = a;
    ans += 2*min(b,c);
    ans += min(a,max(b,c)-min(b,c)+d);
    if(a < max(b,c)-min(b,c)+d) ans++;
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