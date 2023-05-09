#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int N = 1e7+1;
vector<int> factors(N,-1);
void sieve(){
    for(int i = 2; i<=N; i++){
        if(factors[i]==-1){
            factors[i] = i;
            for(int j = i*i; j<=N; j+=i){
                if(factors[j]==-1){
                    factors[j] = i;
                }
            }
        }
    }
}

void solve(){
    int n; cin>>n;
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        while(x>1){
            int f = factors[x];
            while(x%f==0){
                x/=f;
                mp[f]++;
            }
        }
    }
    int ans = 0;
    int count = 0;
    for(auto it : mp){
        if(it.second%2!=0) count++;
        ans+=it.second/2;
    }
    ans+=count/3;
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    sieve();
    while(T--){
        solve();
    }
    return 0;
}