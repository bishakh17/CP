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
    int ans = 2*n-1;
    for(int i = 0; i<n-2; i++){
        if(a[i+1]>max(a[i],a[i+2])) ans++;
        else if(a[i+1]<min(a[i],a[i+2])) ans++;
    }
    for(int i = 0; i<n-3; i++){
        if(a[i+1]>max(a[i],max(a[i+2],a[i+3])) and a[i+2]<min(a[i],min(a[i+1],a[i+3]))) ans++;
        else if(a[i+1]<min(a[i],min(a[i+2],a[i+3])) and a[i+2]>max(a[i],max(a[i+1],a[i+3]))) ans++;
    }
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