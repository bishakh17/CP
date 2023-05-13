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
    int t = -1;
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mp[a[i]] = i;
    }
    int l = n; int r = -1;
    int count = 0;
    int ans = 0;
    for(int i = n; i>1; i--){
        l = min(l,mp[i]);
        r = max(r,mp[i]);
        count++;
        if(r-l+1==count) ans = max(ans,count);
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