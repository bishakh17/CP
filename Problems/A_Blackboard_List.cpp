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
    int maxi = INT64_MIN;
    int gg = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        maxi = max(maxi, a[i]);
        if(a[i]<0) gg=a[i];
    }
    if(gg!=0){
        cout(gg);
        return;
    }
    cout(maxi);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}