#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int nin(int n){
    int ans = 0;
    while(n){
        if(n%10==9) ans++;
        else break;
        n/=10;
    }
    return ans;
}

void solve(){
    int n; cin>>n; 
    if(n%2==0){cout<<n/2<<" "<<n/2<<endl; return;}
    int k = n/2;
    if(k%10!=9){cout<<k<<" "<<n-k<<endl; return;}
    int temp = nin(k);
    int t = 0;
    if(temp%2) t = 1;
    temp = temp/2;
    int g = 0;
    int r = 1;
    while(temp--){
        g = g*10 + 9;
        r = r*10;
    }
    if(t) g = g*r*10;
    else g = g*r;
    if(t) cout<<k-g-4<<" "<<n-(k-g-4)<<endl;
    else cout<<k-g<<" "<<n-(k-g)<<endl;

    

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}