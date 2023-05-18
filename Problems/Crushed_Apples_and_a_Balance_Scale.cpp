#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int m,n; cin>>m>>n;
    int count = 1;
    while(m%2==0){
        m/=2;
        count*=2;
    }
    if(n%m){cout("NO");return;}
    if(n/m>count) cout("NO");
    else cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}