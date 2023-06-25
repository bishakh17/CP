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
    if(s[0]=='9'){
        string ans(n,'1');
        ans[n-1] = '2';
        string temp(n,'0');
        for(int i = 0; i<n; i++){
            int x = s[i]-'0';
            x = 9-x;
            temp[i] = x+'0';
        }
        for(int i = n-1; i>=1; i--){
            int x1 = temp[i]-'0';
            int x2 = ans[i]-'0';
            if(x1+x2>=10){
                ans[i] = (x1+x2-10)+'0';
                ans[i-1] = '2';
            }
            else{
                ans[i] = (x1+x2)+'0';
            }
        }
        cout<<ans<<endl;
        return;
    }
    string ans(n,'0');
    for(int i = 0; i<n; i++){
        int x = s[i]-'0';
        x = 9-x;
        ans[i] = x+'0';
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