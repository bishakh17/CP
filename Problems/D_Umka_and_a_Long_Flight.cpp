#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> fibo(46,1);
void pre(){
    for(int i=2;i<46;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int dp(int n, int x, int y){
    if(n<=1) return 1;
    int l = fibo[n];
    int h = fibo[n+1];
    if(y<=h-l) return dp(n-1,y,x);
    else if(y-l>0) return dp(n-1,y-l,x);
    else return 0;
}

void solve(){
    int n,x,y; cin>>n>>x>>y;
    int temp = dp(n,x,y);
    if(temp) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    pre();
    while(T--){
        solve();
    }
    return 0;
}