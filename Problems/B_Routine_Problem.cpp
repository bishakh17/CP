#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int num = abs(a*d-b*c);
    int den = max(a*d,b*c);
    int gcd = __gcd(num,den);
    num = num/gcd;
    den = den/gcd;
    cout<<num<<"/"<<den<<endl;
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}