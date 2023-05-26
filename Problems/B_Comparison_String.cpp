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
    int count = 1;
    int ans = 0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    cout(max(ans,count)+1);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}