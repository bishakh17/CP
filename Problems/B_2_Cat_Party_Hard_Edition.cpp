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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 1;
    int max_freq = -1;
    vector<int> cnt(1e5+1,0);
    vector<int> temp(1e5+1,0);
    int i = 0;
    while(i<n){
        cnt[a[i]]++;
        max_freq = max(max_freq,cnt[a[i]]);
        temp[cnt[a[i]]]++;
        temp[cnt[a[i]]-1]--;
        if(temp[1]==i+1 or temp[i+1]==1){
            ans = i+1;
        }
        else if(temp[max_freq]==1 and temp[max_freq-1]*(max_freq-1)+max_freq==i+1){
            ans = i+1;
        }
        else if(temp[1]==1 and temp[max_freq]*max_freq==i){
            ans = i+1;
        }
        i++;
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