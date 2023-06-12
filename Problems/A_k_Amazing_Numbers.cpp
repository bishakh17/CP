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
    vector<int> prev(n+1,-1);
    vector<int> maxi(n+1,-1);
    vector<int> ans(n+1,INT64_MAX);
    for(int i=0;i<n;i++){
        maxi[a[i]] = max(maxi[a[i]],i-prev[a[i]]);
        prev[a[i]] = i;
    }
    for(int i=1;i<=n;i++){
        if(prev[i]!=-1){
            maxi[i] = max(maxi[i],n-prev[i]);
        }
    }
    for(int i=1;i<=n;i++){
        if(maxi[i]!=-1){
            ans[maxi[i]] = min(ans[maxi[i]],i);
        }
    }
    for(int i=1;i<=n;i++){
        ans[i] = min(ans[i],ans[i-1]);
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==INT64_MAX) cout<<-1<<" ";
        else cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}