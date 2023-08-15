#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i = 0; i<n; i++){
        if(s[i]=='S'){
            int t = 0; 
            if(i!=0){
                if(s[i-1]=='.') t=1;
            }
            if(i!=n-1){
                if(s[i+1]=='.') t=1;
            }
            if(!t){
                cout(-1);
                return;
            }
        }
    }
    vector<int> temp(n,0);
    for(int i = 0; i<n; i++){
        if(s[i]=='S'){
            if(i!=0){
                if(temp[i-1]==1) continue;
            }
            if(i!=n-1){
                if(s[i+1]=='.'){
                    temp[i+1] = 1;
                    continue;
                }
            }
            if(i!=0){
                if(s[i-1]=='.'){
                    temp[i-1] = 1;
                    continue;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(temp[i]==1) ans++;
    }
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