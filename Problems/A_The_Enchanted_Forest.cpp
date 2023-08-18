#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    int sum = 0;
    vector<int> pref(n+1,0);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        pref[i+1] = pref[i]+a[i];
    }
    if(k>=n){
        int ans = n*(n+1)/2;
        ans += (k-n-1)*n;
        ans+=sum;
        cout(ans);
        return;
    }
    int ans = 0;
    for(int i = k; i<=n; i++){
        ans = max(ans,pref[i]-pref[i-k]);
    }
    ans+= k*(k-1)/2;
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