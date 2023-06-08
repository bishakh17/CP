#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int low = a[0]; int high = a[0];
    for(int i = 1; i<n-1; i++){
        low = max(a[i], low-k+1);
        high = min(a[i]+k-1, high+k-1);
        if(low>high){
            cout<<"NO"<<endl;
            return;
        }
    }
    low = max(a[n-1], low-k+1);
    high = min(a[n-1]+k-1, high+k-1);
    if(low>a[n-1] or high<a[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}