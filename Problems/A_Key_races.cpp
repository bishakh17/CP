#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int temp1 = s*v1 + 2*t1;
    int temp2 = s*v2 + 2*t2;
    if(temp1 < temp2) cout<<"First"<<endl;
    else if(temp1 > temp2) cout<<"Second"<<endl;
    else cout<<"Friendship"<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}