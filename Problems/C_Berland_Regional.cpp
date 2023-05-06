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
    for(int i=0;i<n;i++) cin>>a[i].first;
    for(int i=0;i<n;i++) cin>>a[i].second;
    sort(a.begin(),a.end());
    vector<int> sm(n);
    sm[0] = a[0].second;
    for(int i=1;i<n;i++) sm[i] = sm[i-1] + a[i].second;
    list<int> uni;
    int count = 1;
    for(int i = 1; i<n; i++){
        if(a[i].first == a[i-1].first) count++;
        else{
            uni.push_back(count);
            count = 1;
        }
    }
    uni.push_back(count);
    for(int k = 1; k<=n; k++){
        if(k==1){cout<<sm[n-1]<<' '; continue;}
        int i = -1;
        int ans = sm[n-1];
        auto it = uni.begin();
        while(it!=uni.end()){
            if()
            if(*it%k==0){it++; i+= *it; continue;}
            ans 
        }
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