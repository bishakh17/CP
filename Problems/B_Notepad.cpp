#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n; string s; cin>>s;
    unordered_map<string,int> store;
    for(int i = 0; i<n-1; i++){
        string t = s.substr(i, 2);
        if(store.find(t)!=store.end() and store[t]!=i-1){
            cout("YES");
            return;
        }
        if(store.find(t)==store.end())store[s.substr(i, 2)] = i;
    }
    cout("NO");
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}