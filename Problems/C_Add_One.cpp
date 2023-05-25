#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;

int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}

int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}
vector<int> v(2e5+30,0);
void precompute(){
    vector<int> curr(10,0);
    vector<int> extra(10,0);
    curr[0] = 1;
    for(int i = 1; i<2e5+30; i++){
        for(int j = 0; j<9; j++){
            extra[j+1] = curr[j];
        }
        extra[0] = curr[9];
        extra[1] = modAdd(extra[1],curr[9]);
        curr = extra;
        int ans = 0;
        for(int j = 0; j<10; j++){
            ans = modAdd(ans,curr[j]);
        }
        v[i] = ans;
    }
}
void solve(){
    int n,m; cin>>n>>m;
    int ans = 0;
    while(n){
        int curr = n%10;
        ans = modAdd(ans,v[m+curr]);
        n/=10;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    precompute();
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}