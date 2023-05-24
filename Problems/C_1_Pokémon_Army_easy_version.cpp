#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int dp(int i,vector<int> &a){
    int n = a.size();
    if(i>=n) return 0;
    int ans = a[i];
    while(i+1<n and a[i]<a[i+1]) i++;
    ans = a[i];
    i++;
    while(i+1<n and a[i]>a[i+1]) i++;
    int mini = a[i];
    if(i+1<n) ans-=mini;
    return ans+dp(i+1,a);

}

void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = dp(0,a);
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