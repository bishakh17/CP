#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int dp(int i, int j, int t,vector<string>& a){
    int n = a[0].size();
    if(i==1 and j==n) return 1;
    if(i<0 or i>1 or j>=n) return 0;
    if(a[i][j]=='1' or a[i][j]=='2'){
        if(t==0) return dp(i,j+1,t,a);
        else if(t==1) return dp(i+1,j,t,a);
        else return dp(i-1,j,t,a);
    }
    else{
        if(t==0) return dp(i+1,j,1,a) or dp(i-1,j,2,a);
        else return dp(i,j+1,0,a);
    }
}

void solve(){
    int n; cin>>n;
    vector<string> a(2);
    for(int i = 0; i<2; i++){
        cin>>a[i];
    }
    int temp = dp(0,0,0,a);
    if(temp) cout("YES");
    else cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}