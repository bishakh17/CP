#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    string t; cin>>t;
    unordered_map<char,int> mp;
    if(n<=3){
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    if(n==4){
        if(s[1]!=t[1] or s[2]!=t[2]){
            cout<<"NO"<<endl;
            return;
        }
        mp[s[0]]++;
        mp[s[3]]++;
        mp[t[0]]--;
        mp[t[3]]--;
        if(mp[s[0]] or mp[s[3]]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return;
    }
    if(n==5){
        if(s[2]!=t[2]){
            cout<<"NO"<<endl;
            return;
        }
        mp[s[0]]++;
        mp[s[1]]++;
        mp[s[3]]++;
        mp[s[4]]++;
        mp[t[0]]--;
        mp[t[1]]--;
        mp[t[3]]--;
        mp[t[4]]--;
        if(mp[s[0]] or mp[s[1]] or mp[s[3]] or mp[s[4]]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return;
    }
    for(int i = 0; i<n; i++){
        mp[s[i]]++;
    }
    for(int i = 0; i<n; i++){
        mp[t[i]]--;
        if(mp[t[i]]<0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}