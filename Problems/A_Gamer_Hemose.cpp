#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,h; cin>>n>>h;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int high = a[n-1];
    int second_high = a[n-2];
    int ans = 0;
    int count = h/(high+second_high);
    ans += count*2;
    h -= count*(high+second_high);
    if(h>0){
        if(h<=high) ans++;
        else ans+=2;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}