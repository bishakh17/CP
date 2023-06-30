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
    vector<int> temp1(n+1,0), temp2(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        temp1[a[i].first]++;
        temp2[a[i].second]++;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += (temp1[a[i].first]-1)*(temp2[a[i].second]-1);
    }
    ans = n*(n-1)*(n-2)/6 - ans;
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