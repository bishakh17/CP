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
    int x, y; cin>>x>>y;
    int sx = 0, sy = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U') sy++;
        if(s[i] == 'D') sy--;
        if(s[i] == 'L') sx--;
        if(s[i] == 'R') sx++;
    }
    int l = 0;
    int ans = INT_MAX;
    if(sx==x && sy==y) {cout<<0<<endl; return;}
    for(int r = 0; r<n; r++){
        if(s[r] == 'U') sy--;
        if(s[r] == 'D') sy++;
        if(s[r] == 'L') sx++;
        if(s[r] == 'R') sx--;
        while (l<r && (abs(sx-x) + abs(sy-y) <= r-l+1) && ((r-l+1-(abs(sx-x) + abs(sy-y))) % 2 == 0)){
            ans = min(ans, r-l+1);
            if(s[l] == 'U') sy++;
            if(s[l] == 'D') sy--;
            if(s[l] == 'L') sx--;
            if(s[l] == 'R') sx++;
            l++;
        }
        if(abs(sx-x) + abs(sy-y) <= r-l+1 && ((r-l+1-(abs(sx-x) + abs(sy-y))) % 2 == 0)) ans = min(ans, r-l+1);

    }
    if(ans == INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}