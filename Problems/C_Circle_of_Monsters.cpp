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
    vector<int> b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    int ans = INT64_MAX;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int j = (i+1)%n;
        int x = max(0ll, a[j]-b[i]);
        sum += x;
        ans = min(ans, a[j]-x);
    }
    cout<<sum+ans<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}

