#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,n,m; cin>>a>>b>>n>>m;
    int k = n/(m+1);
    int temp = n%(m+1);
    int ans = temp*a + k*m*a;
    ans = min(ans,temp*b + k*m*a);
    ans = min(ans,n*b);
    ans = min(ans,n*a);
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