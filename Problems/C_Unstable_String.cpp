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
    int n = s.size();
    int ans = 0;
    int count = 0;
    int i = 0;
    while(i<n){
        if(s[i]!='?') break;
        count++;
        i++;
    }
    int k = 0;
    int q = -1;
    if(i<n and s[i]=='1') q = 0;
    else if(i<n and s[i]=='0') q = 1;
    if(i==0) q = -1;
    while(i<n){
        if(i==0) count++;
        else if(s[i]=='?'){
            count++;
            if(s[i-1]=='1'){q = 0; k = 1;}
            else if(s[i-1]=='0'){q = 1; k = 1;}
            else{q = 1-q; k++;}
        }
        else if(s[i]==s[i-1]){
            ans+= count*(count+1)/2;
            count = 1;
        }
        else if((s[i]=='1' and (s[i-1]=='0' or q == 0)) or (s[i]=='0' and (s[i-1]=='1' or q == 1))){
            count++;
        }
        else{
            ans += count*(count+1)/2;
            count = k+1;
            ans-= k*(k+1)/2;
        }
        i++;
    }
    ans += count*(count+1)/2;
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