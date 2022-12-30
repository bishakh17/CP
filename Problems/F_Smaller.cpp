#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int q; cin>>q;
    int ls = 0, lt = 0;
    int s = 0, t = 0;
    for(int i = 0; i<q; i++){
        int d,k; string x;
        cin>>d>>k>>x;
        if(d==1){
            for(char c : x){
                if(c!='a') s = 1;
                ls+=k;
            }
        }
        else{
            for(char c : x){
                if(c!='a') t = 1;
                lt+=k;
            }
        }
        if(t) cout("YES");
        else if(s) cout("NO");
        else if(ls<lt) cout("YES");
        else cout("NO");
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