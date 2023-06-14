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
    int sum = 0;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a[i] = x-y;
        sum+=y;
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = sum*(n-1);
    for(int i=0;i<n;i++){
        ans+=a[i]*i;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}