#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int fastpow (int a, int b) {
    int res = 1;
    while(b > 0) {
        if(b & 1) res  = (res * a)%10;
        a  = (a * a)%10;
        b >>= 1;
    }
    return res;
}


void solve(){
    int n; cin>>n;
    int x = 8;
    int y = fastpow(x, n);
    cout<<y%10<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}