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
    int gg = pow(2,32) - 1;
    int ad = gg;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        ad &= a[i];
    }
    if(ad){
        cout(1);
        return;
    }
    int temp = gg;
    int ans = 0;
    for(int i = 0; i<n; i++){
        temp &= a[i];
        if(temp==0){
            ans++;
            temp = gg;
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