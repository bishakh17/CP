#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,d; cin>>n>>m>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    int ans = -1;
    for(int i = m-1; i>=0; i--){
        int temp = upper_bound(a.begin(),a.end(),b[i]+d) - a.begin();
        temp--;
        if(temp>=0 and abs(a[temp]-b[i])<=d){
            ans = max(ans, b[i]+a[temp]);
        }
    }
    for(int i = n-1; i>=0; i--){
        int temp = upper_bound(b.begin(),b.end(),a[i]+d) - a.begin();
        temp--;
        if(temp>=0 and abs(b[temp]-a[i])<=d){
            ans = max(ans, a[i]+b[temp]);
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}