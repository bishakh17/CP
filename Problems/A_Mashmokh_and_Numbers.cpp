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
    if(k<n/2 || (n==1 && k!=0)) {
        cout(-1);
        return;
    }
    if(n==1 && k==0){
        cout(1);
        return;
    }
    int gg = k - n/2 + 1;
    cout<<gg<<" "<<gg*2<<" ";
    for(int i = 3; i <= n; i++){
        cout<<gg*2+(i-2)<<" ";
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