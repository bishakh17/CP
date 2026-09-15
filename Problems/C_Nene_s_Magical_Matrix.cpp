#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void print(int c, int i, int n){
    cout<<c<<" "<<i<<" ";
    for(int j = 1; j<=n; j++) cout<<j<<" ";
    cout<<endl;
}


void solve(){
    int n; cin>>n;
    cout<<((n*(n+1)*(2*n+1))/3 - (n*(n+1))/2)<<" "<<(2*n -1)<<endl;
    print(1, n, n);
    for(int i = n-1; i>=1; i--) {
        print(2, i, n);
        print(1, i, n);
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