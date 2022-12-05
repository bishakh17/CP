#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int sumd(int x){
    if(x==0) return 0;
    return x%10 + sumd(x/10);
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> ans;
    for(int s = 1; s<=81; s++){
        int x = b*pow(s,a)+c;
        if(x<1e9 and sumd(x)==s) ans.push_back(x);
    }
    cout(ans.size());
    for(int x : ans){
        cout<<x<<" ";
    }
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}