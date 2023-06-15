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
    string s; cin>>s;
    vector<int> pref(n+1, 0);
    for(int i=1; i<=n; i++){
        pref[i] = pref[i-1] + (s[i-1] - '0');
    }
    map<int, int> mp;
    mp[0] = 1;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int temp = pref[i] - i;
        ans += mp[temp];
        mp[temp]++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}