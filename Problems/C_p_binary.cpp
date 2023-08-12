#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,p; cin>>n>>p;
    for(int ans = 1; ans<35; ans++){
        int num = n - ans*p;
        if(num<=0) break;
        int cnt = __builtin_popcountll(num);
        if(cnt<=ans && ans<=num) {
            cout<<ans<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}