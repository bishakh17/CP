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
   if(n==3){cout("NO"); return;} 
   cout("YES");
   if(n%2){
    int k = n/2;
    for(int i = 1; i<=n; i++){
        if(i%2) cout<<k-1<<" ";
        else cout<< -k<<" ";
    }
    cout<<endl;
    return;
   }
   for(int i = 0; i<n; i++){
    cout<<pow(-1,i)<<" ";
   }
   cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}