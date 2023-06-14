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
    int n = s.size(), m = t.size();

    int ones_s = 0, zeros_s = 0;
    int ones_t = 0, zeros_t = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') ones_s++;
        else zeros_s++;
    }
    for(int i=0;i<m;i++){
        if(t[i]=='1') ones_t++;
        else zeros_t++;
    }
    if(ones_t>ones_s || zeros_t>zeros_s){cout(s); return;}
    string ans = "";
    ones_s-=ones_t; zeros_s-=zeros_t;
    ans+=t;
    vector<int> lps(m,-1);
    for(int i = 1; i<m; i++){
        int j = lps[i-1]+1;
        if(t[i]==t[j]) lps[i] = j;
        else{
            while(j>0){
                j = lps[j-1]+1;
                if(t[i]==t[j]){
                    lps[i] = j;
                    break;
                }
            }
        }
    }
    int cnt = lps[m-1]+1;
    zeros_t = 0; ones_t = 0;
    for(int i=cnt;i<m;i++){
        if(t[i]=='1') ones_t++;
        else zeros_t++;
    }
    string temp = t.substr(cnt);
    while(ones_s>=ones_t && zeros_s>=zeros_t){
        ans+=temp;
        ones_s-=ones_t; zeros_s-=zeros_t;
    }
    while(ones_s--) ans+='1';
    while(zeros_s--) ans+='0';
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