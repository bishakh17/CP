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
    int xr = 0;
    for(int i=0;i<n-3;i++){
        cout<<i<<" ";
        xr = xr^i;
    }
    int temp = pow(2,18);
    cout<<temp<<" "<<temp*2<<" ";
    xr = xr^temp;
    xr = xr^(temp*2);
    cout<<xr<<endl;

}
int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}