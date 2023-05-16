#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int gg(int a, int b, int x){
    int temp1 = a/x;
    if(temp1*x!=a) temp1++;
    int temp2 = b/x;
    if(temp2*x!=b) temp2++;
    return temp1+temp2+x-1;
}
void solve(){
    int a,b; cin>>a>>b;
    int x = sqrt(2*a+2*b);
    int ans = INT_MAX;
    for(int i=1;i<=x;i++){
        ans = min(ans, gg(a,b,i));
    }
    cout<<ans<<endl;
    

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}