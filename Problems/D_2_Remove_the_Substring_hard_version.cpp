#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s,t; cin>>s>>t;
    int n = s.size(), m = t.size();
    vector<int> right(m,-1);
    vector<int> left(m,-1);
    int i = 0, j = 0;
    while(j<m){
        if(s[i]==t[j]){
            left[j] = i;
            j++;
        }
        i++;
    }
    i = n-1, j = m-1;
    while(j>=0){
        if(s[i]==t[j]){
            right[j] = i;
            j--;
        }
        i--;
    }
    int ans = max(n-1-left[m-1],right[0]);
    for(int i=0;i<m-1;i++){
        ans = max(ans,right[i+1]-left[i]-1);
    }
    cout(ans);

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}