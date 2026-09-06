#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m;
    cin>>n>>m;
    if((m < n-1) || (m > 2*(n+1))) {
        cout(-1);
        return;
    }
    int last = -1;
    while(m>0 || n>0) {
        if(last == 1 || ((last == -1) && n>m)) {
            cout<<'0';
            n--;
            last = 0;
        } else if (m>n && (m>=2)) {
            cout<<"11";
            m-=2;
            last = 1;
        } else {
            cout<<'1';
            m--;
            last = 1;
        }
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}