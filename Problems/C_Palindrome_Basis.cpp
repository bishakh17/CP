#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;
int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}
vector<int> pal;
void generatePal(){
    for(int i = 1; i<=4e4; i++){
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t){
            pal.push_back(i);
        }
    }
}

vector<vector<int>> mp(498+10, vector<int>(4e4+1, -1));
int dp(int i, int k){
    if(k==0) return 1;
    if(k<0) return 0;
    if(i>=pal.size()) return 0;
    if(mp[i][k] != -1) return mp[i][k];
    return mp[i][k] = modAdd(dp(i+1, k), dp(i, k-pal[i]));
}


void solve(){
    int n; cin>>n;
    cout<<mp[0][n]<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    generatePal();
    dp(0,4e4);
    while(T--){
        solve();
    }
    return 0;
}