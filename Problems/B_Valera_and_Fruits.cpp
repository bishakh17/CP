#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,v;
    cin>>n>>v;
    vector<int> trees(3002,0);
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        trees[a]+=b;
    }
    int ans = 0;
    for(int i = 1; i<=3001; i++){
        int temp1 = min(trees[i-1],v);
        int temp2 = min(trees[i],v-temp1);
        ans = ans + temp1 + temp2;
        trees[i] -= temp2;
    }
    cout(ans);
    return;

}


int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}