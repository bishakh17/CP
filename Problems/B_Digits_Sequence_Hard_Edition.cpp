#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int k; cin>>k;
    int i = 1;
    int g = 9;
    int sum = 0;
    while(true) {
        if(k>=i*g) {
            k -= i*g;
            sum += g;
            i++;
            g *= 10;
        } else {
            int x = k/i;
            int y = k%i;
            sum += x;
            int ans = sum%10;
            if(y > 0) {
                sum ++;
                int t = i-y;
                while(t--) {
                    sum/=10;
                }
                ans = sum%10;
            }
            cout<<ans<<endl;
            return;
        }
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