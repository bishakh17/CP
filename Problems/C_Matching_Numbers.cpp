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
    if(n%2==0){cout("No"); return;}
    cout("Yes");
    int l = 1; int r = 2*n;
    for(int i = 0; i<n; i++){
        if(r<n) r = 2*n - 1;
        cout<<l<<" "<<r<<endl;
        l++; r-=2;
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