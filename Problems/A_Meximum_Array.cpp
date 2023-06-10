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
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> ans;
    unordered_map<int,int> cnt;
    vector<int> suf_mex(n);
    int k = 0;
    for(int i = n-1; i>=0; i--){
        cnt[a[i]]++;
        while(cnt[k]) k++;
        suf_mex[i] = k;
    }
    cnt.clear();
    k = 0;
    int temp = suf_mex[0];
    for(int i = 0; i<n; i++){
        cnt[a[i]]++;
        while(cnt[k]) k++;
        if(k!=temp) continue;
        ans.push_back(temp);
        if(i+1<n) temp = suf_mex[i+1];
        k = 0;
        cnt.clear();
    }
    cout<<ans.size()<<endl;
    for(auto i: ans) cout<<i<<" ";
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