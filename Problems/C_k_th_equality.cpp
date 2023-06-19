#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int x,y,z,k; cin>>x>>y>>z>>k;
    if(z<x or z<y){
        cout(-1);
        return;
    }
    if(z>=x+2 and z>=y+2){
        cout(-1);
        return;
    }
    int a1 = pow(10,x-1);
    int b1 = pow(10,y-1);
    int c1 = pow(10,z-1);
    int a2 = pow(10,x)-1;
    int b2 = pow(10,y)-1;
    int c2 = pow(10,z)-1;
    int a = max(a1,c1-b2);
    int b = max(b1,c1-a);
    int c = a+b;
    int r = 1;
    while(r<=k and a<=a2){
        int l = max(c1-a,b1);
        int gg = min(c2-a,b2);
        int cnt = gg-l+1;
        if(r+cnt<=k) r+=cnt;
        else{
            b=l+k-r;
            c=a+b;
            break;
        }
        a++;
    }
    if(a>a2){
        cout(-1);
        return;
    }
    cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<c<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}