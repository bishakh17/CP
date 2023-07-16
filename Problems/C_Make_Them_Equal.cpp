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
    char c; cin>>c;
    string s; cin>>s;
    int t = 1;
    int f = 1;
    for(int i = 0; i<n; i++){
        if(s[i]!=c) t = 0;
        if(s[i]!=c and i!=n-1) f = 0;
    }
    if(t){
        cout(0);
        return;
    }
    if(s[n-1]==c){
        cout(1);
        cout(n);
        return;
    }
    if(f){
        cout(1);
        cout(n-1);
        return;
    }
    int i = n-1;
    while(i>=0 and s[i]!=c) i--;
    if(i>=0){
        i++;
        if(i>n-i){
            cout(1);
            cout(i);
            return;
        }
    }
    cout(2);
    cout<<n-1<<" "<<n<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}