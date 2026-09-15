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
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    vector<int> x,y;
    x.reserve(n/2 + (n&2));
    y.reserve(n/2 + (n&2));
    int diff = 0;
    int i = n-1;
    while(i>=0) {
        if(diff>0) {
            y.push_back(a[i].second);
            diff -= a[i].first;
            i--;
            if(i>=0) {
                x.push_back(a[i].second);
                diff += a[i].first;
                i--;
            }
        } else {
            x.push_back(a[i].second);
            diff += a[i].first;
            i--;
            if(i>=0) {
                y.push_back(a[i].second);
                diff -= a[i].first;
                i--;
            }
        }
    }
    cout(x.size());
    for(int i = 0; i<x.size(); i++) cout<<x[i]<<" ";
    cout<<endl;
    cout(y.size());
    for(int i = 0; i<y.size(); i++) cout<<y[i]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}