#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,c,q; cin>>n>>c>>q;
    string s; cin>>s;
    for(int i = 0; i<c; i++){
        int l,r; cin>>l>>r;
        l--; r--;
        string temp = s.substr(l,r-l+1);
        s.append(temp);
    }
    
    for(int i = 0; i<q; i++){
        int x; cin>>x;
        cout<<s[x-1]<<endl;
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