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
    if(n%2==0){cout<<2<<" "<<n-3<<" "<<1<<endl;return;}
    n--;
    n/=2;
    if(n%2==0){
        cout<<n-1<<" "<<n+1<<" "<<1<<endl;
    }
    else{
        cout<<n-2<<" "<<n+2<<" "<<1<<endl;

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