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
    unordered_map<char,int> a;
    unordered_map<char,int> b;
    for(int i = 0; i<n; i++){
        b[s[i]]++;
    }
    int ans = b.size();
    for(int i = 0; i<n; i++){
        a[s[i]]++;
        b[s[i]]--;
        if(b[s[i]]==0) b.erase(s[i]);
        ans = max(ans, (int)a.size()+(int)b.size());
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