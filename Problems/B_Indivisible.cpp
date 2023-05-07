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
    if(n==1) {cout(1); return;}
    if(n%2) {cout(-1); return;}
    int l = 2;
    for(int i = 1; i<=n; i++){
        cout<<l<<" ";
        if(l%2) l+=3;
        else l-=1;
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}