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
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='L') x--;
        else if(s[i]=='R') x++;
        else if(s[i]=='U') y++;
        else y--;
        if(x==1 and y==1){
            cout("YES");
            return;
        }
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}