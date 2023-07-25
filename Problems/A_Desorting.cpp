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
    for(int i=0;i<n;i++) cin>>a[i];
    int t = INT64_MAX;
    for(int i = 1; i<n; i++){
        t = min(t, a[i]-a[i-1]);
    }
    if(t<0){
        cout(0);
        return;
    }
    if(t==0){
        cout(1);
        return;
    }
    t++;
    int ans = t/2;
    if(t%2==1) ans++;
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