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
    int t = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]<0) t = 1;
    }
    if(!t){cout(1); return;}
    int sum = 0;
    int mini = 0;
    int idx = -1;
    t = 0;
    int ans = -1;
    for(int i = 0; i<n; i++){
        sum+=a[i];
        if(sum>=0){
            sum = 0;
            t = 0;
            continue;
        }
        if(t==0){
            idx = i;
            t = 1;
        }
        if(sum<mini){
            mini = sum;
            ans = idx;
        }
    }
    int k = 0;
    for(int i = 0; i<ans; i++){
        k+=a[i];
    }
    cout(k);
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}