#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> ans(32768,-1);
int rec(int a){
    if(a==0) return 0;
    if(ans[a]!=-1) return ans[a];
    int t1 = (a+1)%32768;
    int t2 = (2*a)%32768;
    int gg = 1+min(rec(t1),rec(t2));
    return ans[a] = gg;
}
void precompute(){
    for(int i = 0; i<32768; i++){
        ans[i] = rec(i);
    }
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    fastio;
    // cin>>T;
    precompute();
    while(T--){
        solve();
    }
    return 0;
}