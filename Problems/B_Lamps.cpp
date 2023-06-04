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
    for(int i = 0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i = 0; i<n;){
        int temp = a[i].first;
        while(i<n and a[i].first==temp) i++;
        int t = i;
        i--;
        int count = 0;
        while(i>=0 and a[i].first==temp and count<temp){ans+=a[i].second; count++; i--;}
        i = t;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}