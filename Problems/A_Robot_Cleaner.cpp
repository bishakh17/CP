#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,x,y,a,b; cin>>n>>m>>x>>y>>a>>b;
    if(x==a or y==b){
        cout<<0<<endl;
        return;
    }
    int ans1;
    if(a>x) ans1 = a-x;
    else ans1 = n-x + n-a;
    int ans2;
    if(b>y) ans2 = b-y;
    else ans2 = m-y + m-b;
    int ans = min(ans1,ans2);
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