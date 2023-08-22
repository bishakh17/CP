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
    for(int i = 0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[a[i]]++;
    }
    vector<int> ans(n+1,-1);
    ans[0] = 0;
    int j = 0;
    priority_queue<int> pq;
    while(j<n and a[j]==0){
        j++;
        if(j>1){
            pq.push(0);
        }
    }
    int miss = -1;
    if(j==0) miss = 0;
    for(int i = 1; i<=n; i++){
        if(ans[i-1]==-1){
            ans[i] = -1;
            continue;
        }
        if(miss!=-1){
            if(pq.empty()){
                ans[i] = -1;
            }
            else{
                int temp = pq.top();
                pq.pop();
                ans[i] = miss-temp+ans[i-1];
                miss = -1;
            }
        }
        else{
            ans[i] = ans[i-1];
        }
        int cnt = 0;
        while(j<n and a[j]==i){
            j++;
            cnt++;
            if(cnt>1){
                pq.push(i);
            }
        }
        if(cnt==0){
            miss = i;
        }
    }
    for(int i = 0; i<=n; i++){
        if(ans[i]==-1) cout<<-1<<" ";
        else cout<<ans[i]+mp[i]<<" ";
    }
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