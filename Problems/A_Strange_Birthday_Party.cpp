#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<m; i++) cin>>b[i];
    sort(a.begin(),a.end());
    int ans = 0;
    int k = 0;
    for(int i = n-1; i>=0; i--){
        int gg = a[i]-1;
        if(gg>=k){
            ans+=b[k];
            k++;
        }
        else{
            ans+=b[gg];
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}