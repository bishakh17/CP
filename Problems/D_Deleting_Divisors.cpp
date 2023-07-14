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
        cout<<"Bob"<<endl;
        return;
    }
    int gg = __builtin_popcountll(n);
    if(gg==1){
        int x = log2(n);
        if(x%2==0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        return;
    }
    if(n%2==0) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}