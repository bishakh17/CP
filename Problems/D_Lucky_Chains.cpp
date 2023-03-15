#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

#define n 1e7

vector<int> prime(n+1,-1);
void sieve(){
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i*i<= n; i++) {
        if (prime[i]==-1) {
            for (int j = i*i; j <= n; j += i) prime[j] = i;
        }
    }
}

void solve(){
    int a,b; cin>>a>>b;
    int d = b-a;
    int ans = INT64_MAX;
    while(d!=1){
        if(prime[d]==-1) prime[d] = d;
        int temp = a%prime[d];
        if(!temp){ans = 0; break;}
        ans = min(ans,prime[d]-temp);
        d = d/prime[d];
    }
    if(ans==INT64_MAX) ans = -1;
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