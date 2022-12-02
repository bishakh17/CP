#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

vector<bool> prime(1e6+1,true);
void sieve(){
    prime[0] = false;
    prime[1] = false;
    for (int i = 3; i*i <= 1e6; i += 2) {
        if (prime[i]) {
            for (int j = i * i; j <= 1e6; j += i)
            prime[j] = false;
        }
    }
}
void solve(){
    sieve();
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        ll x;
        cin>>x;
        ll t = sqrt(x);
        if(t*t==x and (t%2!=0 or t==2) and prime[t]) cout("YES");
        else cout("NO");
    }
    return;
}

int main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}