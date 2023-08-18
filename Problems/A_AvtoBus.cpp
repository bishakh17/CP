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
    if(n%2!=0 or n==2){
        cout(-1);
        return;
    }
    int gg1 = n/6;
    if(n%6!=0){
        gg1++;
    }
    int gg2 = n/4;
    cout<<gg1<<" "<<gg2<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}