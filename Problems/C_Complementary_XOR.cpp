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
    string s,t; cin>>s>>t;
    int k = 0;
    int ones = 0;
    if(s[0]!=t[0]) k = 1;
    for(int i = 0; i<n; i++){
        if((k and s[i]==t[i]) or (!k and s[i]!=t[i])){cout("NO"); return;}
        if(s[i]=='1') ones++;

    }
    cout("YES");
    if(ones%2) k = 1-k;
    if(!k) cout(ones);
    else cout(ones+3);
    for(int i = 0; i<n; i++){
        if(s[i]=='1')cout<<i+1<<" "<<i+1<<endl;
    }
    if(k){
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}