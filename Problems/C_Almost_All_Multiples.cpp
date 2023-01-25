#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; int x; cin>>n>>x;
    if(n%x){cout(-1); return;}
    int d = n/x;
    vector<int> prime;
    int p = 2;
    while(d!=1){
        while(d%p==0){
            prime.push_back(p);
            d/=p;
        }
        p++;
    }
    cout<<x<<" ";
    int prev = x;
    int j = 0;
    for(int i = 2; i<=n-1; i++){
        if(i==prev){
            int t = prime[j];
            j++;
            prev *= t;
            cout<<prev<<" "; 
        }
        else{
            cout<<i<<" ";
        }
    }
    cout(1);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}