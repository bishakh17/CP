#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int m,s; cin>>m>>s;
    int sum = 0, maxi = 0;
    for(int i = 0; i<m; i++){
        int x; cin>>x;
        maxi = max(maxi,x);
        sum+=x;
    }
    int rem = (maxi*(maxi+1))/2-sum;
    s-=rem;
    maxi++;
    while(s>0){
        s-=maxi;
        maxi++;
    }
    if(s==0) cout("YES");
    else cout("NO");
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}