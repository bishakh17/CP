#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x,y; cin>>n>>x>>y;
    string a; cin>>a;
    string b; cin>>b;
    vector<int> p;
    for(int i = 0; i<n; i++){
        if(a[i]!=b[i]) p.push_back(i);
    }
    int count = p.size();
    if(count%2) cout(-1);
    else if(count==2 and p[0]==p[1]-1) cout(min(2*y,x));
    else cout(y*(count/2));
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}