#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; 
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    int curr = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for (int j = m; j<n; j++){
        curr+=min(b[j],a[j]);
    }
    int ans = INT64_MAX;
    for(int j = m-1; j>=0; j--){
        int gg = curr+a[j];
        ans = min(ans,gg);
        curr+=b[j];
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}