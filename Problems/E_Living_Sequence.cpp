#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> skip(15,0);
void helper(){
    int mult = 1;
    for(int i = 1; i<15; i++){
        skip[i] = skip[i-1]*9 + mult;
        mult*=10;
    }
}
int dp(int k){
    if(k<4){return k;}
    if(k<=9){return k+1;}
    int count = 0;
    int mult = 10;
    int i = 1;
    while((mult-skip[i])<=k){
        count = (mult-skip[i]);
        mult*=10;
        i++;
    }
    mult/=10;
    int temp = mult + dp(k-count);
    if(temp/mult == 4) temp+=mult;
    return temp;
}

void solve(){
    int k; cin>>k;
    int ans = dp(k);
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    helper();
    while(T--){
        solve();
    }
    return 0;
}