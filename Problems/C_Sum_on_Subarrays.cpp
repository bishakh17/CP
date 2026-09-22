#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, k; cin>>n>>k;
    int i = 1;
    while(k > (i*(i+1))/2){
        i++;
    }
    for(int j = 1; j<=n-i; j++) {
        cout<<-1000<<" ";
    }
    for(int j = 1; j<i; j++) {
        cout<<2<<" ";
    }
    cout<<(2*k+1-i*(i+1))<<" ";
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