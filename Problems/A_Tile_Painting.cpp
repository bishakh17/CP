#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int N = 1e6;

//1 if prime, else smallest prime factor
vector<int> prime(N+1,1);
void sieve(){
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i*i<=N; i++){
        if(prime[i]==1){
            for(int j = i*i; j<=N; j+=i){
                if(prime[j]==1) prime[j] = i;
            }
        }
    }
}

void solve(){
    int n; cin>>n;
    int count = 0;
    int p;
    for(int i = 2; i<=1e6; i++){
        if(prime[i]==1){
            if(n%i==0) {
                while(n>1){
                    if(n%i==0) n/=i;
                    else{cout(1);return;}
                }
                cout(i);
                return;
            }
        }
    }
    cout(n);
}

int32_t main(){
    fastio;
    // cin>>T;
    sieve();
    while(T--){
        solve();
    }
    return 0;
}