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
    int prev = -1;
    for(int i = 0; i < n; i++) {
        int x; cin>>x;
        if(x == 1) x++;
        if(prev == -1) {
            prev = x;
        }
        else {
            if(x % prev == 0) x++;
            prev = x;
        }
        cout<<x<<" ";
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