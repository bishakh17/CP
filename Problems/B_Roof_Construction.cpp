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
    n--;
    int temp = log2(n);
    temp = pow(2,temp);
    for(int i = n; i>=temp; i--){
        cout<<i<<" ";
    }
    for(int i = 0; i<temp; i++){
        cout<<i<<" ";
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