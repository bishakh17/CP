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
    int n = s.length();
    int m = t.length();
    if(n>m){
        swap(n,m);
        swap(s,t);
    }
    int ans = 0;
    if(m==n){
        int i = 0;
        while(i<n and s[i]==t[i]) i++;
        if(i==n){
            cout(0);
            return;
        }
        int temp1 = s[i]-'0';
        int temp2 = t[i]-'0';
        ans+=(temp2-temp1);
        ans+=9*(n-i-1);
    }
    else{
        int temp = t[0]-'0';
        ans+=temp;
        ans+=9*(m-1);
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