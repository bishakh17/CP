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
    if(n%2==0 and k>(n-1)/2){cout(-1); return;}
    if(n%2==1 and k>n/2){cout(-1); return;}
    int i = 1;
    int j = n;
    int count = 0;
    while(i<j){
        if(count==k){break;}
        cout<<i<<" "<<j<<" ";
        i++;
        j--;
        count++;
    }
    while(j>=i){
        cout<<j<<" ";
        j--;
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