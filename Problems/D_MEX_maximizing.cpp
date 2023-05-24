#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int q,x; cin>>q>>x;
    int ans = 0;
    vector<int> rem(x,0);
    for(int i=0;i<q;i++){
        int y; cin>>y;
        rem[y%x]++;
        while(rem[ans%x]){
            rem[ans%x]--;
            ans++;
        }
        cout(ans);
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}