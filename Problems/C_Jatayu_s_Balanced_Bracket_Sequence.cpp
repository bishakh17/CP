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
    n*=2;
    int cnt = 0;
    int ans = 0;
    int last = -1;
    for(int i = 0; i<n; i++){
        if(s[i]=='('){
            cnt++;
            if(cnt>last+1) ans++;
        }
        else{
            cnt--;
            last = cnt;
        }
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