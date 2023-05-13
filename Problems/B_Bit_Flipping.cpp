#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int g = k;
    vector<int> ans(n,0);
    for(int i = 0; i<n; i++){
        int t = (int)s[i] - '0';
        if(i==n-1){
            if(k) ans[i] = k;
            if((t+g-k)%2==0) s[i] = '0';
            else s[i] = '1';
        }
        else if((t+g)%2==0){
            if(k){
                s[i] = '1';
                k--;
                ans[i] = 1;
            }
            else s[i] = '0';
        }
        else s[i] = '1';
    }
    cout(s);
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}