#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    cout(n);
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        cout<<i<<" "<<(int)pow(2,ceil((double)log2(x)))-x<<endl;
    }
    return;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}