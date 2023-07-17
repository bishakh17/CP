#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b; cin>>n>>a>>b;
    if(4*a+2*b<=n){
        cout(1);
        return;
    }
    if(2*a+b<=n){
        cout(2);
        return;
    }
    if(2*a<=n and 2*b<=n){
        cout(3);
        return;
    }
    if(4*a<=n){
        cout(3);
        return;
    }
    if(a+b<=n and 2*a<=n){
        cout(3);
        return;
    }
    if(a+b<=n){
        cout(4);
        return;
    }
    if(2*a<=n){
        cout(4);
        return;
    }
    if(2*b<=n){
        cout(5);
        return;
    }
    cout(6);

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}