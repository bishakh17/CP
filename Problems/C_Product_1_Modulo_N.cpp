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
    vector<int> ans;
    int prod = 1;
    for(int i = 1; i<n; i++){
        if(__gcd(i, n) == 1){
            ans.push_back(i);
            prod = (prod*i)%n;
        }
    }
    if(prod==1) cout<<ans.size()<<endl;
    else cout<<ans.size()-1<<endl;
    for(int i = 0; i<ans.size(); i++){
        if(ans[i]==1 or ans[i]!=prod){
            cout<<ans[i]<<" ";
        }
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}