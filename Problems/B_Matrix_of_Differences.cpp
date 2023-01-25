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
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int t;
            if(i%2) t = (i-1)*n+j;
            else t = (i-1)*n+(n-j+1);
            if(t%2){
                int k = t/2 + t%2; 
                cout<<k<<" ";
            }
            else {
                int k = n*n+1-t/2;
                cout<<k<<" ";
            }
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