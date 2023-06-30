#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;
int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> idx(n);
    for(int i=0; i<n; i++) idx[a[i]] = i;
    int high = max(idx[0],idx[1]);
    int low = min(idx[0],idx[1]);
    int ans = 1;
    int count = 0;
    for(int i=2; i<n; i++){
        if(idx[i]>high){
            high = idx[i];
            count++;
        }
        else if(idx[i]<low){
            low = idx[i];
            count++;
        }
        else{
            ans = modMul(ans,(high-low-count-1));
            count++;
        }
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