#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int h,n; cin>>h>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    x.push_back(0);
    int i = 1;
    int ans = 0;
    int plat = h;
    while(i<n){
        plat = x[i]+1;
        if(x[i+1]==x[i]-1){
            i+=2;
        }
        else{
            ans++;
            i++;
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