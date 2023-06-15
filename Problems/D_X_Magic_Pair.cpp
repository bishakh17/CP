#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int rec(int a, int b, int x){
    if(x>b) return 0;
    if(a==0) return 0;
    if((b-x)%a==0) return 1;
    int temp = b%a;
    return rec(temp,a,x);
}

void solve(){
    int a,b,x; cin>>a>>b>>x;
    if(a>b){
        swap(a,b);
    }
    int temp = rec(a,b,x);
    if(temp){
        cout("YES");
    }
    else{
        cout("NO");
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