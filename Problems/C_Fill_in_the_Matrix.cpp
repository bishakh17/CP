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
    if(m==1) cout<<0<<endl;
    else cout<<min(m,n+1)<<endl;
    int t = 0;
    for(int i = 1; i<=min(n,m-1); i++){
        for(int j = t; j<t+m; j++) cout<<j%m<<" ";
        cout<<endl;
        t++;
    }
    for(int i = 1; i<=n-min(n,m-1); i++){
        for(int j = 0; j<m; j++) cout<<j<<" ";
        cout<<endl;
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