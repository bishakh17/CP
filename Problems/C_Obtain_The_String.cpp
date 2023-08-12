#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s,t; cin>>s>>t;
    int n = s.size();
    int m = t.size();
    vector<vector<int>> temp(26,vector<int>(n,n));
    for(int j = 0; j<26; j++){
        for(int i = n-2; i>=0; i--){
            if(s[i+1]-'a'==j){
                temp[j][i] = i+1;
            }
            else{
                temp[j][i] = temp[j][i+1];
            }
        }
    }
    int curr = -1;
    int ans = 1;
    int i = 0;
    while(i<m){
        if(curr==-1){
            if(s[0]==t[i]){
                curr = 0;
                i++;
            }
            else if(temp[t[i]-'a'][0]==n){
                cout(-1);
                return;
            }
            else{
                curr = temp[t[i]-'a'][0];
                i++;
            }
        }
        else{
            if(temp[t[i]-'a'][curr]==n){
                ans++;
                curr = -1;
            }
            else{
                curr = temp[t[i]-'a'][curr];
                i++;
            }
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}