#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    int x3,y3; cin>>x3>>y3;
    if(y1==y2){
        if(y3<y2)cout(abs(x1-x2));
        else cout(0);
        return;
    }
    if(y2==y3){
        if(y1<y2)cout(abs(x2-x3));
        else cout(0);

        return;
    }
    if(y1==y3){
        if(y2<y3)cout(abs(x1-x3));
        else cout(0);

        return;
    }
    cout(0);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}