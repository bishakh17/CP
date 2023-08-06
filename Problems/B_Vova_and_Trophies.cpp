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
    string s; cin>>s;
    int g = 0;
    for(int i = 0; i<n; i++) if(s[i]=='G') g++;
    int ans = 0;
    int cnt = 0;
    int i = 0; int j = 0;
    while(j<n){
        if(s[j]=='S') cnt++;
        j++;
        if(cnt==2){
            while(s[i]!='S'){
                i++;
            }
            i++;
            cnt--;
        }
        if(cnt==0){
            ans = max(ans,j-i);
        }
        if(cnt==1){
            int temp = j-i;
            if(temp-1<g) ans = max(ans,temp);
            else ans = max(ans,temp-1);
        }
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