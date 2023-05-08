#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n*m);
    for(int i = 0; i<n*m; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int d = a[n*m-1]-a[0];
    int d1 = a[n*m-1]-a[1];
    int ans = (n*m-m-n+1)*d;
    ans+= (max(m,n)-1)*d;
    ans+= (min(m,n)-1)*d1;
    int ans1 = (n*m-m-n+1)*d;
    int d2 = a[n*m-2]-a[0];
    ans1+= (max(m,n)-1)*d;
    ans1+= (min(m,n)-1)*d2;
    cout(max(ans,ans1));

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}