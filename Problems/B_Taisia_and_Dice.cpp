#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,s,r; cin>>n>>s>>r;
    int maxi = s-r;
    int t = 1;
    int i = 1;
    while(i<=n){
        if((n-i)*maxi>=s-1){
            cout<<1<<" ";
            i++;
            s--;
        }
        else{
            if(s-maxi>=0){
                cout<<maxi<<" ";
                s-=maxi;
                i++;
            }
            else{
                maxi--;
            }
        }
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}