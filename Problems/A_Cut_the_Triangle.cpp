#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    vector<int> x(3);
    vector<int> y(3);
    for(int i = 0; i<3; i++){
        cin>>x[i]>>y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int a = 0;
    int b = 0;
    for(int i = 1; i<3; i++){
        if(y[i]==y[i-1]) b = 1;
        if(x[i]==x[i-1]) a = 1;
    }
    if(a and b)cout("NO");
    else cout("YES");
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}