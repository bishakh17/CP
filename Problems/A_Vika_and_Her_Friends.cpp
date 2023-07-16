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
    int x,y; cin>>x>>y;
    int t = 0;
    for(int i = 0; i<k; i++){
        int a,b; cin>>a>>b;
        int temp = abs(a-x)+abs(b-y);
        if(temp%2==0) t = 1;
    }
    if(t==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}