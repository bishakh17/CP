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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> prev(n,-1);
    vector<int> next(n,n);
    int ans = 0;
    for(int i=1;i<n;i++){
        int j = i-1;
        while(j!=-1 && a[i]>=a[j]){
            j = prev[j];
        }
        prev[i] = j;
    }
    for(int i=n-2;i>=0;i--){
        int j = i+1;
        while(j!=n && a[i]>a[j]){
            j = next[j];
        }
        next[i] = j;
    }
    for(int i=0;i<n;i++){
        int l = i-prev[i];
        int r = next[i]-i;
        ans += a[i]*l*r;
    }
    prev.assign(n,-1);
    next.assign(n,n);

    for(int i=1;i<n;i++){
        int j = i-1;
        while(j!=-1 && a[i]<a[j]){
            j = prev[j];
        }
        prev[i] = j;
    }
    for(int i=n-2;i>=0;i--){
        int j = i+1;
        while(j!=n && a[i]<=a[j]){
            j = next[j];
        }
        next[i] = j;
    }
    for(int i=0;i<n;i++){
        int l = i-prev[i];
        int r = next[i]-i;
        ans -= a[i]*l*r;
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