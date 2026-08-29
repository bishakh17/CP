#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x; int y; 
    cin>>x>>y;
    cout((x-y)*2);
    for(int i = x; i >= y; i--) {
        cout<<i<<" ";
    }
    for(int i = y+1; i < x; i++) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}