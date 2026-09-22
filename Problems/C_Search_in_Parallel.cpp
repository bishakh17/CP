#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,s1,s2; cin>>n>>s1>>s2;
    vector<pair<int,int>> a(n); 
    for(int i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    pair<vector<int>, vector<int>> result;
    for(int i = n-1; i >= 0; i--){
        if((result.first.size()+1)*s1 <= (result.second.size()+1)*s2){
            result.first.push_back(a[i].second);
        } else {
            result.second.push_back(a[i].second);
        }
    }
    cout<<result.first.size()<<" ";
    for(auto x: result.first) cout<<x<<" ";
    cout<<endl;
    cout<<result.second.size()<<" ";
    for(auto x: result.second) cout<<x<<" ";
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