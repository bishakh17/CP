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
    int diff = 0;
    int x; cin>>x;
    int prev = x;
    for(int i = 1; i<n; i++){
        int x; cin>>x;
        diff+=(x-prev);
        prev=x;
    }
    if(diff<=n+1) cout("YES");
    else cout("NO");
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