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
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> store(n+1,0);
    store[n] = 1;
    for(int i = n-1; i>=0; i--){
        if(i+a[i]+1<=n) store[i] |= store[i+a[i]+1];
        if(i+1<=n and i-a[i]>=0) store[i-a[i]] |= store[i+1];
    }


    if(store[0]) cout("YES");
    else cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}