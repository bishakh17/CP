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
    cout<<n/2 + (n&1)<<endl;
    int i = 1; int j = n;
    while(i<=j){
        if(i==j) cout<<3*i-2<<" "<<3*i-1<<endl;
        else cout<<3*i-2<<" "<<3*j-1<<endl;
        i++; j--;
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