#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    int ans = 0;
    int t = 1;
    int gg = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        ans+= x-a[i];
        if(a[i]!=x) t = 0;
        if(a[i]==x) gg = 1;
    }
    if(t) cout(0);
    else if(!ans or gg) cout(1);
    else cout(2);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}