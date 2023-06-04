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
    vector<int> a(n,0);
    int ones = 0;
    for(int i = 0; i<n; i++){
        int gg = ceil((double)(i+1)/(double)k);
        if(gg>ones){
            a[i] = 1;
            ones++;
        }
    }
    int ans = ones;
    ones = 0;
    for(int i = n-1; i>=0; i--){
        if(a[i]) ones++;
        int gg = ceil((double)(n-i)/(double)k);
        if(gg>ones and a[i]==0){
            a[i] = 1;
            ones++;
        }
    }
    ans = ones;
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}