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
    int xr = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        xr ^= a[i];
    }
    if(xr==0){
        cout<<"YES"<<endl;
        return;
    }
    int i = 0;
    int cnt = 0;
    while(i<n){
        int xr2 = 0;
        for(int j=i; j<n; j++){
            xr2 ^= a[j];
            if(xr2 == xr){
                i = j+1;
                cnt++;
                break;
            }
        }
        if(xr2 == 0){
            break;
        }
        else if(xr2 != xr){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(cnt>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}