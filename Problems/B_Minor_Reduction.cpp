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
    int t = 0;
    for(int i = 1; i<n; i++){
        int c1 = s[i]-'0';
        int c2 = s[i-1]-'0';
        int gg = c1+c2;
        if(gg>=10) t=1;
        
    }
    if(!t){
        string t = s.substr(1, n-1);
        int gg = s[0]-'0';
        t[0]+=gg;
        cout(t);
        return;
    }
    for(int i = n-1; i>0; i--){
        int c1 = s[i]-'0';
        int c2 = s[i-1]-'0';
        int gg = c1+c2;
        if(gg>=10){
            s[i-1] = '1';
            s[i] = gg%10+'0';
            cout(s);
            return;
        }
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