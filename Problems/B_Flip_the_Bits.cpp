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
    string s,t; cin>>s>>t;
    int ones = 0, zeros = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1') ones++;
        else zeros++;
    }
    int swc = 0;
    int i = n-1;
    while(i>=0){
        if((s[i]==t[i] and swc%2==0) or (s[i]!=t[i] and swc%2==1)){
            if(s[i]=='1' and swc%2==0) ones--;
            else if(s[i]=='0' and swc%2==1) ones--;
            else if(s[i]=='1' and swc%2==1) zeros--;
            else zeros--;
            i--;
            continue;
        }
        else if(ones!=zeros){cout<<"NO"<<endl; return;}
        else{
            swc++;
            if(s[i]=='1' and swc%2==0) ones--;
            else if(s[i]=='0' and swc%2==1) ones--;
            else if(s[i]=='1' and swc%2==1) zeros--;
            else zeros--;
            i--;
        }
    }
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}