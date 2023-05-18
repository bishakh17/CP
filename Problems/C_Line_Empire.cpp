#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b; cin>>n>>a>>b;
    vector<int> v(n);
    vector<int> sum(n+1,0);
    for(int i=0;i<n;i++){cin>>v[i]; sum[i+1] = sum[i]+v[i];}
    int ans = sum[n]*b;
    for(int i = 0; i<n-1; i++){
        int temp = (a+b)*v[i] + (sum[n]-sum[i+1])*b - (n-i-1)*b*v[i];
        ans = min(ans,temp);
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