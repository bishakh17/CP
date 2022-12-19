#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void generate(vector<int>& lucky, int seven, int four, int n){
    if(n>1e10) return;
    if(seven==four) lucky.push_back(n);
    generate(lucky,seven+1,four,n*10+7);
    generate(lucky,seven,four+1,n*10+4);
}

void solve(){
    int n;
    cin>>n;
    vector<int> lucky;
    generate(lucky,0,0,0);
    sort(lucky.begin(),lucky.end());
    cout(lucky[lower_bound(lucky.begin(), lucky.end(), n) - lucky.begin()]);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}