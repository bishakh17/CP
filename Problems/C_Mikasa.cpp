#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    if(m<n){
        cout(0);
        return;
    }
    string s = bitset<32>(n).to_string();
    string t = bitset<32>(m).to_string();
    int k = n^m;
    string ans = bitset<32>(k).to_string();
    int gg = 0;
    for(int i = 0; i<32; i++){
        if(gg){
            ans[i] = '0';
            continue;
        }
        if(s[i]=='1' and t[i]=='0'){
            gg = 1;
            ans[i] = '0';
            continue;
        }
    } 
    if(!gg){
        for(int i = 31; i>=0; i--){
            if(t[i]=='0'){
                ans[i] = '1';
                break;
            }
            else{
                ans[i] = '0';
            }
        }
    }
    int res = stoi(ans,0,2);
    cout(res);
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}