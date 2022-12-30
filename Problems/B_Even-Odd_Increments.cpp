#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q; cin>>n>>q;
    int sum = 0, ne = 0, no = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        sum+=x;
        if(x%2) no++;
        else ne++;
    }
    for(int i = 0; i<q; i++){
        int t,x; cin>>t>>x;
        if(t){sum+=no*x; if(x%2){no=0; ne=n;}}
        else{sum+=ne*x; if(x%2){no=n; ne=0;}}
        cout(sum);
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