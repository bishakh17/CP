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
    int num1 = -1;
    int num2 = -1;
    int count = 0;
    string ans = "YES";
    for(int i = 0; i<n; i++) {
        int x; cin>>x;
        if(x==num1) {
            count ++;
        } else if (x==num2) {
            count --;
        } else if (num1==-1) {
            num1 = x;
            count ++;
        } else if (num2 == -1 ){
            num2 = x;
            count --;
        } else {
            ans = "NO";
        }
    }
    if(abs(count) > 1) {
        ans = "NO";
    }
    if(num1==-1 || num2==-1) {
        ans = "YES";
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