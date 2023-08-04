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
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> mp(n+1,-1);
    mp[0] = 0;
    for(int i = 1; i<=n; i++){
        int temp = mp[i-1]+20;
        int idx1 = lower_bound(a.begin(),a.end(),a[i-1]-89)-a.begin();
        if(idx1<i) temp = min(temp,mp[idx1]+50);
        int idx2 = lower_bound(a.begin(),a.end(),a[i-1]-1439)-a.begin();
        if(idx2<i) temp = min(temp,mp[idx2]+120);
        mp[i] = temp;
    }
    for(int i = 1; i<=n; i++){
        cout<<mp[i]-mp[i-1]<<endl;
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}