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
    vector<int> v(n);
    int maxi = INT64_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        maxi = max(maxi, v[i]);
    }
    int ans = 0;
    int i = n-1;
    int prev = v[n-1];
    while(i>=0){
        if(v[i]>prev){ans++; prev = v[i];}
        if(v[i]==maxi){cout(ans); return;}
        i--;
    }
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