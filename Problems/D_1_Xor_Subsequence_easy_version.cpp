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
    vector<int> mp(n,-1);
    int ans = 1;
    for(int i = 0; i<n; i++){
        mp[i] = 1;
        for(int j = i-1; j>=max(0LL,i-512); j--){
            if((a[i]^j)>(a[j]^i)){
                mp[i] = max(mp[i],mp[j]+1);
            }
        }
        ans = max(ans,mp[i]);
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