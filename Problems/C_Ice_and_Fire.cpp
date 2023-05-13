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
    int t = 1;
    for(int i = 2; i<=n; i++){
        if(i==2){cout<<1<<" "; continue;}
        if(s[i-2]==s[i-3])t++;
        else t = 1;
        cout<<i-t<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}