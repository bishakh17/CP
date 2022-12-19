#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int r,g,b;
    cin>>r>>g>>b;
    int ans = r/3 + g/3 + b/3;
    if(r>0 and g>0 and b>0)ans = max(ans, 1+(r-1)/3+(g-1)/3+(b-1)/3);
    if(r>1 and g>1 and b>1)ans = max(ans, 2+(r-2)/3+(g-2)/3+(b-2)/3);
    cout(ans);
    
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}