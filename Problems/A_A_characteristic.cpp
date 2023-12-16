#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    
    int n,k; cin>>n>>k;
    for(int i = 0; i<=n; i++){
        int j = n-i;
        if(i*(i-1)/2 + j*(j-1)/2 == k){
            cout("YES");
            for(int t = 0; t<i; t++){cout<<1<<" ";}
            for(int t = 0; t<j; t++){cout<<-1<<" ";}
            cout<<endl;
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