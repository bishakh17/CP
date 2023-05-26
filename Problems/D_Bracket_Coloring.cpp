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
    int gg = 0;
    int t = 0;
    int count = 1;
    if(s[0]==')') t = 1;
    for(int i = 0; i<n; i++){
        if(t==0){
            if(s[i]=='(') gg++;
            else gg--;
        }
        else{
            if(s[i]==')') gg++;
            else gg--;
        }
        if(gg<0) count = 2;
    }
    if(gg!=0){cout(-1); return;}
    cout(count);
    if(count==1){
        for(int i = 0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        vector<int> ans(n,1);
        int gg = 0;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='(') gg++;
            else gg--;
            if(gg<0){
                ans[i] = 2;
                gg = 0;
                count++;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(count==0) break;
            if(ans[i]==1 and s[i]=='('){
                ans[i] = 2;
                count--;
            }
        }
        for(int i = 0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}