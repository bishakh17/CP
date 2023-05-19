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
    sort(s.begin(),s.end());
    if(t!="abc"){cout<<s<<endl;return;}
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    if(mp['a']==0 or mp['b']==0 or mp['c']==0){cout<<s<<endl;return;}
    string ans;
    int b = 0;
    for(auto i : mp){
        string temp(i.second,i.first);
        if(i.first!='b') ans.append(temp);
        else b = i.second;
        string temp2(b,'b');
        if(i.first=='c') ans.append(temp2);
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}