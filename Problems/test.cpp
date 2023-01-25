#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int characterReplacement(string& s, int k) {
    int n = s.size();
    int ans = 0;
    for(int c = 65; c<=90; c++){
        int t = 0;
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<n){
            if(s[j]==(char)c){count = max(count,j-i+1);j++;}
            else if(s[j]!=(char)c and t<k){
                count = max(count,j-i+1);
                t++;
                j++;
            }
            else{
                if(s[i]!=(char)c){
                    t--;
                }
                i++;
            }
        }
        ans = max(ans,count);
    }
    return ans;
}

void solve(){
    string s; cin>>s;
    int k; cin>>k;
    int ans = characterReplacement(s,k);
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