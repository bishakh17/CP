#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x; cin>>x;
    if(x&1){
        cout(-1);
        return;
    }
    int y = x>>1;
    int i = x;
    int j = y;
    while(y){
        if(y&1 and x&1){
            cout(-1);
            return;
        }
        y = y>>1;
        x = x>>1;
    }
    cout<<i+j<<" "<<j<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}