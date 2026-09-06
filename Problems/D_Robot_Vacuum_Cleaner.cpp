#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int cntS(const string &s) {
    int cnt = 0;
    for(char c : s) {
        if(c == 's') cnt++;
    }
    return cnt;
}

bool cmp(const string &a, const string &b) {
    return (cntS(a) * (b.size()-cntS(b))) > (cntS(b) * (a.size()-cntS(a)));
}


void solve(){
    int n; cin>>n;
    int ans = 0;
    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end(), cmp);
    string concat;
    for(const string &s : a) {
        concat += s;
    }
    int m = concat.size();
    int h_count = m-cntS(concat);
    for(char c : concat) {
        if(c == 's') {
            ans += h_count;
        } else {
            h_count--;
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