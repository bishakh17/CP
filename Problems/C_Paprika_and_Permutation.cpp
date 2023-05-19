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
    sort(a.begin(),a.end());
    vector<int> b(n+1,0);
    vector<int> miss;
    for(int i = 0; i<n; i++){
        if(a[i]<=n and !b[a[i]]) b[a[i]] = 1;
        else miss.push_back(a[i]);
    }
    int ans = 0;
    int i = 1;
    int j = 0;
    while(i<=n){
        if(!b[i] and miss[j]>2*i){ans++; j++;}
        else if(!b[i]){cout(-1); return;}
        i++;
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