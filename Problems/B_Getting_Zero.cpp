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
    for(int i = 0; i<n; i++){
        int ans = 15;
        for(int j = 0; j<=15; j++){
            for(int k = 0; k<=15; k++){
                int x = (a[i]+j)*pow(2,k);
                if(x%32768==0) ans = min(ans,j+k);
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;

}