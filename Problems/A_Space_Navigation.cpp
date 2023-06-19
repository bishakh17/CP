#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x,y; cin>>x>>y;
    string s; cin>>s;
    int u=0, d=0, l=0, r=0;
    for(auto c: s){
        if(c=='U') u++;
        else if(c=='D') d++;
        else if(c=='L') l++;
        else r++;
    }
    int temp_x = r-l-x;
    int temp_y = u-d-y;
    int t = 1;
    if(temp_x<0){
        if(l<abs(temp_x)) t = 0;
    }
    else{
        if(r<temp_x) t = 0;
    }
    if(temp_y<0){
        if(d<abs(temp_y)) t = 0;
    }
    else{
        if(u<temp_y) t = 0;
    }
    if(t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}