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
    vector<int> k(n);
    vector<int> h(n);
    for(int i = 0; i<n; i++) cin>>k[i];
    for(int i = 0; i<n; i++) cin>>h[i];
    int start = k[n-1]-h[n-1]+1;
    int end = k[n-1];
    int ans = 0;
    for(int i = n-2; i>=0; i--){
        int s = k[i]-h[i]+1;
        if(s>=start) continue;
        if(k[i]>=start and s<start){
            start = s;
        }
        else{
            int l = end-start+1;
            ans+= l*(l+1)/2;
            start = s;
            end = k[i];
        }
    }
    int l = end-start+1;
    ans+= l*(l+1)/2;
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