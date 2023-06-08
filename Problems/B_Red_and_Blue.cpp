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
    int maxi1 = max((int)0,a[0]);
    int maxi2 = max((int)0,b[0]);
    for(int i=1; i<n; i++){
        a[i] += a[i-1];
        maxi1 = max(maxi1, a[i]);
    }
    for(int i=1; i<m; i++){
        b[i] += b[i-1];
        maxi2 = max(maxi2, b[i]);
    }
    cout<<maxi1+maxi2<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}