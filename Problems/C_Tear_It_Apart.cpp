#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int ans = INT32_MAX;
    for(int i = 0; i<26; i++){
        char c = 'a'+i;
        int maxi = 0;
        int count = 0;
        for(int j = 0; j<s.size(); j++){
            if(s[j]!=c){
                count++;
            }
            else{
                maxi = max(maxi, count);
                count = 0;
            }
        }
        maxi = max(maxi, count);
        int temp = log2(maxi)+1;
        ans = min(ans, temp);
        if(ans<0) ans = 0;

    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}