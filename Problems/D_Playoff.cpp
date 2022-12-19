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
    string s; cin>>s;
    int a = 0;
    int b = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0') a++;
        else b++;
    }
    int min = pow(2,b);
    int max = pow(2,n)-pow(2,a)+1;
    for(int i = min; i<=max; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}