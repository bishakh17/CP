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
    int up = 0;
    int down = 0;
    int t = 0;
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        up+=x;
        down+=y;
        if((x+y)%2) t = 1;
    }
    if((up+down)%2==0){
        if(up%2==0) cout(0);
        else if(t) cout(1);
        else cout(-1);
    }
    else cout(-1);
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