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
    vector<int> a(n,0);
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        a[x]++;
    }
    int t = 0;
    for(int i = 0; i<n; i++) {
        if(a[i]==1 && t==0) {
            t = 1;
        }
        else if(a[i] == 0 || (a[i] == 1 && t == 1)) {
            cout(i);
            return;
        }
    }
    cout(n);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}