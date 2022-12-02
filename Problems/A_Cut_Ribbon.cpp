#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


int a,b,c;
int dp(int n, vector<int>& temp){
    if(n==0) return 0;
    if(n<=0) return INT_MIN;
    if(temp[n]!=-1) return temp[n];

    return temp[n] = 1+max(max(dp(n-a,temp),dp(n-b,temp)),dp(n-c,temp));
}
void solve(){
    int n;
    vector<int> temp(n+1,-1);
    cin>>n>>a>>b>>c;
    int ans = dp(n,temp);
    cout(ans);
    return;
}

int main(){
     fastio;
    // cin>>temp;
    while(T--){
        solve();
    }
    return 0;
}