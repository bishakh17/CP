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
    vector<string> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n);
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++){
        int m = a[i].size();
        int gg = 0;
        int t = 0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='(') gg++;
            else gg--;
            if(gg<0) t = 1;
        }
        if(gg>=0 and t) b[i] = INT64_MAX;
        else if(gg<0){
            int k = 0;
            int t = 0;
            for(int j=m-1;j>=0;j--){
                if(a[i][j]=='(') k++;
                else k--;
                if(k>0) t = 1;
            }
            if(t) b[i] = INT64_MAX;
            else b[i] = gg;
        }

        else b[i] = gg;
        if(b[i]<=0) mp[b[i]]++;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(b[i]==INT64_MAX or b[i]<=0) continue;
        if(mp[-b[i]]>0){
            ans++;
            mp[-b[i]]--;
        }
    }
    ans += mp[0]/2;
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