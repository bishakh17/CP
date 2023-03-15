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
    for(int i=0; i<n; i++) cin>>a[i];
    int ans = 0;
    int sum = 0;
    int k = n;
    for(int i = 0; i<n; i++){
        if(!a[i]){k = i; break;}
        sum+=a[i];
        if(!sum) ans++;
    }
    sum = 0;
    map<int,int> m;
    int maxi = 0;
    for(int i = k; i<n; i++){
        if(!a[i]){
            sum = 0;
            ans+=maxi;
            m.clear();
            m[sum]++;
            maxi = 1;
        }
        else{
            sum+=a[i];
            m[sum]++;
            maxi = max(maxi, m[sum]);
        }
    }
    ans+=maxi;
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