#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b;
    cin>>a>>b;
    int k = __gcd(a,b);
    a /= k;
    b /= k;
    int count = 0;
    while(a%2==0){a/=2;count++;}
    while(a%3==0){a/=3;count++;}
    while(a%5==0){a/=5;count++;}
    while(b%2==0){b/=2;count++;}
    while(b%3==0){b/=3;count++;}
    while(b%5==0){b/=5;count++;}

    if(a==1 and b==1) cout(count);
    else cout(-1);
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