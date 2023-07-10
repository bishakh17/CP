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
    int m = pow(2,20);
    vector<pair<int,int>> temp(m,{0,0});
    temp[a[0]].second++;
    temp[0].first++;
    int ans = 0;
    for(int i = 1; i<n; i++){
        a[i]^=a[i-1];
        if(i%2==0){
            ans+=temp[a[i]].second;
            temp[a[i]].second++;
        }
        else{
            ans+=temp[a[i]].first;
            temp[a[i]].first++;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}