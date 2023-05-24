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
    if(n%2){cout<<"NO"<<endl; return;}
    if(s[0]!='1' or s[n-1]!='1'){cout<<"NO"<<endl; return;}
    int ones = 0, zeros = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1') ones++;
        else zeros++;
    }
    if(zeros%2 or ones%2){cout<<"NO"<<endl; return;}
    cout<<"YES"<<endl;
    string a,b;
    int m = ones/2;
    for(int i = 0; i<n; i++){
        if(s[i]=='1' and ones>m){
            a.push_back('(');
            b.push_back('(');
            ones--;
        }
        else if(s[i]=='1'){
            a.push_back(')');
            b.push_back(')');
            ones--;
        }
        else if(s[i]=='0' and zeros%2==0){
            a.push_back('(');
            b.push_back(')');
            zeros--;
        }
        else{
            a.push_back(')');
            b.push_back('(');
            zeros--;
        }
    }
    cout<<a<<endl<<b<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}