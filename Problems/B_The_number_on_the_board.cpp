#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int k; cin>>k;
    string s; cin>>s;
    int sum = 0;
    int n = s.size();
    for(int i=0; i<n; i++){
        sum += s[i]-'0';
    }
    if(sum >= k){
        cout(0);
        return;
    }
    sort(s.begin(), s.end());
    int i = 0;
    while(sum < k){
        sum += 9 - (s[i] - '0');
        i++;
    }
    cout(i);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}