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
    vector<int> a(n); 
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> s(n+1,0);
    for(int i = n-1; i>=0; i--) {
        s[i] = s[i+1] + a[i];
    }
    int ans = a[0]; 
    int curr = 1;
    for(int i = 1; i<n; i++) {
        if(-a[i]-s[i+1] > 0) {
            ans += curr*a[i];
        } else {
            curr++;
            ans += curr*a[i];
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}