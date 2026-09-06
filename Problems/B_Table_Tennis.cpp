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
    int ans = -1;
    int maxi = -1;
    int cnt = 0;
    for(int i=0;i<=n;i++){
        int x; cin>>x;
        if(x<maxi) {
            cnt++;
        }
        if(x>maxi) {
            maxi = x;
            cnt = 1;
            if(i==0) cnt--;
        }
        if(cnt==k && ans==-1) {
            ans = maxi;
        }
    }
    if(ans==-1) ans = maxi;
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}