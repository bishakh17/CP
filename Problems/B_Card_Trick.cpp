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
    int m; cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    int tot = 0;
    for(int i=0; i<m; i++){
        tot += n-b[i];
    }
    tot = tot%n;
    tot = (n-tot)%n;
    cout(a[tot]);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}