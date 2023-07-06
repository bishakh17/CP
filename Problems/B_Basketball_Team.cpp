#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void solve(){
    int n,m,h; cin>>n>>m>>h;
    vector<int> a(m);
    int sum = 0;
    for(int i=0; i<m; i++){
        cin>>a[i];
        if(i==h-1) a[i]--;
        sum += a[i];
    }
    if(sum<n-1){
        cout(-1);
        return;
    }
    if(sum-a[h-1] < n-1){
        cout(1);
        return;
    }
    double ans = 1;
    for(int i=sum-a[h-1]+1; i<=sum; i++){
        double gg = (double)1/(double)i;
        ans *= gg;
        ans *= (i-n+1);
    }

    ans = 1-ans;
    cout<<fixed<<setprecision(10)<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}