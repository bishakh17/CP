#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x,y; cin>>x>>y;
    int d = x+y;
    if(d%2){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(x%2){
        cout<<x/2<<" "<<y/2+1<<endl;
    }
    else{
        cout<<x/2<<" "<<y/2<<endl;
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