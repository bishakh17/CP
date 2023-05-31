#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int r,b,d; cin>>r>>b>>d;
    int mini = min(r,b);
    int maxi = max(r,b);
    if(mini*(d+1)>=maxi) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}