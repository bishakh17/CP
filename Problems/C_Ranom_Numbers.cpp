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
    int n = s.length();
    vector<int> ans(n,0);
    vector<int> temp(5,0);
    ans[n-1] = pow(10,s[n-1]-'A');
    int max1 = s[n-1]-'A';
    int max2 = -1;

    for(int i = n-2; i>=0; i--){
        int gg = s[i]-'A';
        if(gg<max1 and gg>=max2){
            temp[max1]+=2*pow(10,gg);
            ans[i] = -pow(10,gg);
            max2 = gg;
        }
        if(gg<max1 and gg<max2){
            ans[i] = -pow(10,gg);
        }
        if(gg>=max1){
            max2 = max1;
            max1 = gg;
            ans[i] = pow(10,gg);
        }
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=ans[i];
    }
    int k = 0;
    for(int i = 0; i<5; i++){
        int gg = pow(10,i);
        k = max(k,temp[i]-gg);
    }
    for(int i = 0; i<n; i++){
        int l = 1e4;
        k = max(k,l-ans[i]);
        if(s[i]!='E' and ans[i]>0) break;
    }
    cout(k+sum);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}