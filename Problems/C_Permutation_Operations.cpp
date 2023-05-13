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
    vector<pair<int,int>> ans;
    for(int i = n-1; i>0; i--){
        if(a[i]<a[i-1]) ans.push_back({a[i-1]-a[i],i});
    }
    sort(ans.begin(),ans.end());
    int count = 1;
    for(int i = 0; i<ans.size(); i++){
        while(ans[i].first>0){
            ans[i].first-=count;
            count++;
            cout<<ans[i].second+1<<" ";
        }
    }
    while(count<=n){
        cout<<1<<" ";
        count++;
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