#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,k; cin>>n>>m>>k;
    for(int i = 0; i<2*k; i++){
        int x,y; cin>>x>>y;
    }
    string ans = "";
    ans.append(m-1, 'L');
    ans.append(n-1, 'U');
    for(int i = 0; i<n; i++){
        if(i%2==0){
            ans.append(m-1, 'R');
        }
        else{
            ans.append(m-1, 'L');
        }
        if(i!=n-1){
            ans.append(1, 'D');
        }
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}