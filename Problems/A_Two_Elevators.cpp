#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,c; cin>>a>>b>>c;
    int n1 = abs(a-1);
    int n2 = abs(b-c) + abs(c-1);
    if(n1<n2) cout(1);
    if(n1>n2) cout(2);
    if(n1==n2) cout(3);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}