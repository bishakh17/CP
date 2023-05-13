#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    int ans1 = 4;
    if(x1==1 || x1==n) ans1--;
    if(y1==1 || y1==m) ans1--;
    int ans2 = 4;
    if(x2==1 || x2==n) ans2--;
    if(y2==1 || y2==m) ans2--;
    cout(min(ans1,ans2));
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}