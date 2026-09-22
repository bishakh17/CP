#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int ans = INT_MAX;
int curr = -1;
int temp = 0;

void rec(int i, vector<int>& a){
    if(i == a.size()){
        if(curr == -1) curr = temp;
        else curr = curr ^ temp;
        ans = min(ans, curr);
        return;
    }
    int gg = temp | a[i];
    int tt = curr;
    temp = 0;
    if(curr == -1) curr = gg; 
    else curr = curr ^ gg;
    rec(i+1,a);
    temp = gg;
    curr = tt;
    rec(i+1,a);
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    rec(0, a);
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}