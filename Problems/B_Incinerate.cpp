#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<pair<int,int>> ph(n);
    int t = n;
    for(int i = 0; i<n; i++){
        cin>>ph[i].second;
    }
    for(int i = 0; i<n; i++){
        cin>>ph[i].first;
    }
    sort(ph.begin(),ph.end());
    int h = k;
    int i = 0;
    while(i<n){
        if(ph[i].second-h>0){
            k = k-ph[i].first;
            if(k<=0) break;
            h = h + k;
        }
        else i++;
    }
    if(i==n) cout("YES");
    else cout("NO");
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}