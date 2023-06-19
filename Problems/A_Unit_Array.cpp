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
    int one = 0;
    int minus = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x == 1) one++;
        else minus++;
    }
    if(one>=minus and minus%2==0){cout(0); return;}
    if(one>=minus and minus%2!=0){cout(1); return;}
    if(one<minus){
        int gg = minus - one;
        int ans = gg/2;
        if(gg%2!=0) ans++;
        if((minus-ans)%2) ans++;
        cout(ans);
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}