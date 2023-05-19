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
    while(n){
        int temp = n;
        while(temp){
            if(temp%3==0) temp/=3;
            else if(temp%3==1) temp--;
            else break;
        }
        if(!temp){cout(n); return;}
        n++;
    }

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}