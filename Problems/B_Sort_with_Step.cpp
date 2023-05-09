#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        cin>>ans[i];
    }
    int count = 0;
    for(int i = 0; i<ans.size(); i++){
        if((ans[i]-(i+1))%k){count++;}
    }
    if(count==0) cout(0);
    else if(count==2) cout(1);
    else cout(-1);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}