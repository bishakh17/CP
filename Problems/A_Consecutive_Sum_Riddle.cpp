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
    if(n>0){
        cout<<-n+1<<" "<<n<<endl;
        return;
    }
    if(n==0){
        cout<<-1<<" "<<1<<endl;
        return;
    }
    cout<<n-1<<" "<<-n<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}