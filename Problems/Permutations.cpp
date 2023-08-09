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
    if(n==1){
        cout(1);
        return;
    }
    if(n<=3){
        cout("NO SOLUTION");
        return;
    }
    if(n==4){
        cout("2 4 1 3");
        return;
    }
    for(int i=1;i<=n;i+=2) cout<<i<<" ";
    for(int i=2;i<=n;i+=2) cout<<i<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}