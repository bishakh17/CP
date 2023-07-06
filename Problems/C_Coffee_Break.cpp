#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,d; cin>>n>>m>>d;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    vector<int> ans(n);
    int k = 1;
    sort(a.begin(),a.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(int i = 0; i<n; i++){
        if(pq.empty()){
            pq.push({a[i].first,k});
            ans[a[i].second]=k;
            continue;
        }
        auto temp = pq.top();
        if(temp.first+d<a[i].first){
            pq.pop();
            pq.push({a[i].first,temp.second});
            ans[a[i].second]=temp.second;
        }
        else{
            k++;
            pq.push({a[i].first,k});
            ans[a[i].second]=k;
        }
    }
    cout(k);
    for(int i = 0; i<n; i++) cout<<ans[i]<<" ";
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