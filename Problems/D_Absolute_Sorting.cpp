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
    int low = 0;
    int high = 1e9;
    for(int i = 1; i<n; i++){
        if(a[i-1]==a[i]) continue;
        if(a[i-1]<a[i]){
            int temp = (a[i-1]+a[i])/2;
            high = min(high,temp);
            if(low>high){cout(-1); return;}
        }
        else{
            int temp = a[i-1]+a[i];
            if(temp%2) temp = temp/2 + 1;
            else temp = temp/2;
            low = max(low,temp);
            if(low>high){cout(-1); return;}
        }
    }
    cout(low);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}