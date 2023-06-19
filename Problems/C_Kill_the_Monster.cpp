#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int hc,dc; cin>>hc>>dc;
    int hm,dm; cin>>hm>>dm;
    int k,w,a; cin>>k>>w>>a;
    for(int i = 0; i<=k; i++){
        int j = k-i;
        int h = hc+i*a;
        int d = dc+j*w;
        int rounds = hm/d;
        if(hm%d!=0) rounds++;
        int rounds2 = h/dm;
        if(h%dm!=0) rounds2++;
        if(rounds2>=rounds){
            cout("YES");
            return;
        }
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}