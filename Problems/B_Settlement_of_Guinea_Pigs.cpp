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
    int total = 0;
    int curr = 0;
    for(int i = 0; i<n; i++){
        if(a[i]==1){
            total++;
            curr++;
            ans = max(ans,curr);
        }
        else{
            curr = total/2 + 1;
            if(total==0) curr = 0;
            ans = max(ans,curr);
        }
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