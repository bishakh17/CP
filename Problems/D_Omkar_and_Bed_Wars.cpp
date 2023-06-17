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
    int t = 0;
    for(int i = 1; i<n; i++){
        if(s[i]!=s[0]) t = 1;
    }
    if(!t){
        int ans = n/3;
        if(n%3) ans++;
        cout<<ans<<endl;
        return;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='R' and s[(i+1)%n]=='L'){
            int cnt_l = 0, cnt_r = 0;
            int j = i;
            while(s[j]=='R'){
                cnt_r++;
                j--;
                if(j<0) j = n-1;
            }
            j = (i+1)%n;
            while(s[j]=='L'){
                cnt_l++;
                j = (j+1)%n;
            }
            int temp1 = (cnt_l+1)/3;
            int temp2 = (cnt_r+1)/3;
            if((cnt_l+1)%3==0) temp1--;
            if((cnt_r+1)%3==0) temp2--;
            ans += temp1+temp2;
        }
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