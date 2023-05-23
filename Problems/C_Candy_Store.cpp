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
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int ans = 1;
    int prevhcf = a[0].first*a[0].second;
    int prevlcm = a[0].second;
    for(int i = 1; i<n; i++){
        int hcf = __gcd(prevhcf, a[i].first*a[i].second);
        int lcm = (prevlcm*a[i].second)/__gcd(prevlcm, a[i].second);
        if(hcf%lcm!=0){
            hcf = a[i].first*a[i].second;
            lcm = a[i].second;
            ans++;
        }
        prevhcf = hcf;
        prevlcm = lcm;
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