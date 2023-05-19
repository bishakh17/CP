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
    int k = n/2;
    for(int i = n-1; i>=0; i--){
        if(s[i]=='0'){
            if(n-i>k){
                cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
                return;
            }
            else{
                cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
                return;
            }
        }
    }
    cout<<1<<" "<<k<<" "<<k+1<<" "<<2*k<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}