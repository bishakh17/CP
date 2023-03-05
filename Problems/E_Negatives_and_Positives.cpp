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
    int neg = 0, ans = 0, mini = INT_MAX;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x<0) neg++;
        ans += abs(x);
        mini = min(mini, abs(x));

    }
    if(neg%2==0) cout(ans);
    else cout(ans-2*mini);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}