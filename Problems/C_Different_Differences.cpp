#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int k,n; cin>>k>>n;
    int d = 1;
    int curr = 1;
    cout<<curr<<" ";
    k--;
    while(k--){
        curr+=d;
        cout<<curr<<" ";
        d++;
        if(curr + d + k-1 >n) d = 1;
    }
    cout<<endl;
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}