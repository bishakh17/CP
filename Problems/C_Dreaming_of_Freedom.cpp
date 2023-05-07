#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; 
    cin>>n>>m;
    if(n==1){cout("YES"); return;}
    if(n<=m){cout("NO"); return;}
    int temp = sqrt(n);
    for(int i = 2; i<=min(temp,m); i++){
        if(n%i==0){
            cout("NO");
            return;
        }
    }
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}