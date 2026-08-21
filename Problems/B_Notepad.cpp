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
    if(n<=3) {
        cout("NO");
        return;
    }
    vector<vector<int>> a(26,vector<int>(26,0));
    for(int i = 1; i<n; i++) {
        int x = s[i-1]-'a';
        int y = s[i]-'a';
        a[x][y]++;
        if(a[x][y]>1 && (a[x][y]>2 || (s[i-2]!=s[i-1] || x!=y))) {
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