#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,h; cin>>n>>h;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    vector<int> temp(n-1);
    for(int i = 0; i<n-1; i++){
        temp[i] = a[i+1].first-a[i].second;
    }
    int ans = h+a[n-1].second-a[n-1].first;
    int k = 0;
    int j = n-2;
    int gg = a[n-1].second-a[n-1].first;
    for(int i = n-2; i>=0; i--){
        k+=temp[i];
        gg+=a[i].second-a[i].first;
        while(k>=h){
            k-=temp[j];
            gg-=a[j+1].second-a[j+1].first;
            j--;
        }
        ans = max(ans,gg+h);
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}