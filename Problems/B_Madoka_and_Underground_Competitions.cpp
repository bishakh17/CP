#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k,r,c; cin>>n>>k>>r>>c;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int x1 = i-r;
            int y1 = j-c;
            int gg = x1-y1;
            if(gg%k==0) cout<<"X";
            else cout<<".";
        }
        cout<<endl;
    } 
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}