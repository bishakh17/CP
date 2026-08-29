#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; 
    cin>>n>>k;
    int l = 0; int r = 0;
    for(int i=0;i<n;i++) {
        int x, y;
        cin>>x>>y;
        if(x==k) l = 1;
        if(y==k) r = 1;
    }
    if(l && r) cout("YES");
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