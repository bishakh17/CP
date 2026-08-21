#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int unsigned long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout(n);
    for(int i=0;i<n;i++){
        int x = 1<<bit_width(a[i]);
        x = x - a[i];
        cout<<i+1<<" "<<x<<endl;
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