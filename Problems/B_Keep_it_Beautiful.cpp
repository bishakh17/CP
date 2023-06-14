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
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    string ans = "1";
    int t = 0;
    int temp1 = a[0];
    int temp2 = a[0];
    for(int i = 1; i<n; i++){
        if(t==0){
            if(a[i]>=temp2){
                temp2 = a[i];
                ans += '1';
            }
            else if(a[i]<=temp1){
                t = 1;
                temp2 = a[i];
                ans += '1';
            }
            else{
                ans+='0';
            }
        }
        else{
            if(a[i]>=temp2 and a[i]<=temp1){
                temp2 = a[i];
                ans += '1'; 
            }
            else{
                ans+='0';
            }
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}