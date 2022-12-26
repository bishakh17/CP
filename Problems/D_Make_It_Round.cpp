#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    int two = 0;
    int five = 0;
    int t = n;
    while(t%2==0){
        t=t/2;
        two++;
    }
    while(t%5==0){
        t=t/5;
        five++;
    }
    int k = 1;
    while(two<five){
        if(k*2>m) break;
        k = k*2;
        two++;
    }
    while(five<two){
        if(k*5>m) break;
        k = k*5;
        five++;
    }
    while(true){
        if(k*10>m) break;
        k=k*10;
    }
    int ans = n*k;
    cout(((n*m)/ans)*ans);
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