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
    string s; cin>>s;
    int q; cin>>q;
    int p = 0;
    int m = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='+') p++;
        else m++;
    }
    for(int i = 0; i<q; i++){
        int x,y; cin>>x>>y;
        int temp1 = abs(p-m)*min(x,y);
        int temp2 = abs(x-y);
        if(!temp1) cout("YES");
        else if(!temp2) cout("NO");
        else if(temp1%temp2==0 and temp1/temp2<=min(p,m)) cout("YES");
        else cout("NO");
    }

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}