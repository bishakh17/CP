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
    int ans = 0;
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        if(x==i) ans++;
    }
    if(ans%2==0) ans = ans/2;
    else ans = ans/2 + 1;
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