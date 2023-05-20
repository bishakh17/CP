#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<pair<int,pair<int,int>>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second.first>>a[i].second.second;
    }
    sort(a.begin(),a.end());
    int l = m; int r = m;
    int prevt = 0;
    for(int i = 0; i<n; i++){
        int t = a[i].first;
        int L = a[i].second.first;
        int R = a[i].second.second;
        l-= t-prevt;
        r+= t-prevt;
        if(L>r or R<l){cout("NO"); return;}
        l = max(l,L);
        r = min(r,R);
        prevt = t;
    } 
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}