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
    string s,t; cin>>s>>t;
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 0; i<n; i++){
        if(s[i]!=t[i]){
            if(s[i]=='a') ans1.push_back(i);
            else ans2.push_back(i);
        }
    }
    int temp1 = ans1.size();
    int temp2 = ans2.size();
    if((temp1+temp2)%2!=0){cout(-1); return;}
    int ans = (temp1/2)+(temp2/2);
    if(temp1%2!=0) ans+=2;
    cout(ans);
    for(int i = 0; i<temp1-1; i+=2){
        cout<<ans1[i]+1<<" "<<ans1[i+1]+1<<endl;
    }
    for(int i = 0; i<temp2-1; i+=2){
        cout<<ans2[i]+1<<" "<<ans2[i+1]+1<<endl;
    }
    if(temp1%2!=0){
        cout<<ans1[temp1-1]+1<<" "<<ans1[temp1-1]+1<<endl;
        cout<<ans1[temp1-1]+1<<" "<<ans2[temp2-1]+1<<endl;
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}