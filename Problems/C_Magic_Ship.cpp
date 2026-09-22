#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

bool check(int m, int x, int y, vector<int>& cx, vector<int>& cy){
    int n = cx.size() - 1;
    int cycles = m/n;
    int extra = m % n;
    int total_x = cycles * cx[n] + cx[extra];
    int total_y = cycles * cy[n] + cy[extra];
    int diff_x = abs(x - total_x);
    int diff_y = abs(y - total_y);

    return diff_x + diff_y <= m;

}


void solve(){
    int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
    int n; cin>>n; string s; cin>>s;
    int x = x2 - x1;
    int y = y2 - y1;
    vector<int> cx(n+1, 0), cy(n+1, 0);
    for(int i = 0; i < n; i++){
        cx[i+1] = cx[i];
        cy[i+1] = cy[i];
        if(s[i] == 'U') cy[i+1]++;
        if(s[i] == 'D') cy[i+1]--;
        if(s[i] == 'L') cx[i+1]--;
        if(s[i] == 'R') cx[i+1]++;
    }
    int ans = -1;
    int l = 0, r = (abs(x) + abs(y))*n;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(check(m, x, y, cx, cy)){
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}