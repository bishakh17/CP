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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n-1);
    int sum = 0;
    for(int i = 1; i<n; i++){
        b[i-1] = abs(a[i]-a[i-1]);
        sum += b[i-1];
    }
    sort(b.begin(),b.end(),greater<int>());
    int gg = 0;
    for(int i=0;i<k-1;i++){
        gg += b[i];
    }
    cout<<sum-gg<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}