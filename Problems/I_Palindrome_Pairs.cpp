#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int hsh(string& s){
    int ans = 0;
    for(int i = 0; i<s.length(); i++){
        int x = s[i]-'a';
        x = 1<<x;
        ans = ans^x;
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        int x = hsh(s);
        a[i] = x;
    }
    unordered_map<int,int> mp;
    int ans = 0;
    for(int j = 0; j<n; j++){
        ans+=mp[a[j]];
        for(int i = 0; i<26; i++){
            int x = 1<<i;
            int y = a[j]^x;
            ans+=mp[y];
        }
        mp[a[j]]++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
     // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}