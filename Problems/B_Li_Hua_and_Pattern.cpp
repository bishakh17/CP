#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    int g = k;
    k=k*2;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(a[i][j]==a[n-1-i][n-1-j]) continue;
            else{
                if(!k){cout("NO"); return;}
                else k--;
            }
        }
    }
    if((k/2)%2 and n%2==0) cout("NO");
    else cout("YES"); 
}

int32_t main(){
    fastio;
    cin>>T; 
    while(T--){
        solve();
    }
    return 0;
}