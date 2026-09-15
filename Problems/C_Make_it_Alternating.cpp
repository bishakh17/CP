#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;
int N = 2e5+1;


int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}

vector<int> factorial(N+1,1);
void precompute(){
    for(int i=1;i<=N;i++){
        factorial[i] = modMul(factorial[i-1],i);
    }
}

void solve(){
    string s; cin>>s;
    int ans1 = 0;
    int ans2 = 1;
    int curr = 1;
    for(int i = 0; i < s.size(); i++) {
        if(i==0) continue;
        if(s[i] == s[i-1]) {
            curr++;
        } else {
            ans1 += curr-1;
            ans2 = modMul(ans2, curr);
            curr = 1;
        }
    }
    ans1 += curr-1;
    ans2 = modMul(ans2, curr);
    ans2 = modMul(ans2, factorial[ans1]);
    cout<<ans1<<" "<<ans2<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    precompute();
    while(T--){
        solve();
    }
    return 0;
}