#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

string num_to_bin(int n){
    string s = "";
    while(n){
        s += to_string(n&1);
        n = n>>1;
    }
    reverse(s.begin(), s.end());
    return s;
}

void solve(){
    int n; cin>>n;
    string s = num_to_bin(n);
    int k = s.size();
    int ans = 0;
    int prev = 0;
    for(int i = 0; i<k; i++){
        int temp = prev*2 + (s[i]-'0');
        ans += temp;
        prev = temp;
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