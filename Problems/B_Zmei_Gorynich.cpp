#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    int maxi = INT64_MIN;
    for(int i=0;i<n;i++){
        int d,h; cin>>d>>h;
        a[i] = d-h;
        maxi = max(maxi,d);
    }
    sort(a.begin(),a.end(),greater<int>());
    if(maxi>=x){
        cout<<1<<endl;
        return;
    }
    if(a[0]<=0){
        cout<<-1<<endl;
        return;
    }
    int ans = (x-maxi)/a[0];
    if((x-maxi)%a[0]!=0) ans++;
    cout<<ans+1<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}