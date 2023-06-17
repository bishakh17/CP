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
    vector<int> cnt(n+1,0);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    sort(cnt.begin(),cnt.end(),greater<int>());
    int ans = 0;
    int i = 1;
    while(cnt[i]==cnt[0]) i++;
    ans = i-1;
    int sum = 0;
    while(cnt[i]){
        sum += cnt[i];
        i++;
    }
    ans+=(sum/(cnt[0]-1));
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