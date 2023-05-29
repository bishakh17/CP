#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    string s1;
    string s2;
    int n = s.size();
    for(int i = 0; i<n; i++){
        if((s[i]-'0')%2==0) s1+=s[i];
        else s2+=s[i];
    }
    int i = 0;
    int j = 0;
    while(i<s1.size() and j<s2.size()){
        if(s1[i]<s2[j]){cout<<s1[i]; i++;}
        else {cout<<s2[j]; j++;}
    }
    while(i<s1.size()){cout<<s1[i]; i++;}
    while(j<s2.size()){cout<<s2[j]; j++;}
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}