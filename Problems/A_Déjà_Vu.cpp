#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    int t = 0;
    for(int i=0; i<n; i++){
        if(s[i]!='a') t=1;
    }
    if(!t){cout<<"NO"<<endl; return;}
    cout("YES");
    int i = 0, j = n-1;
    int gg = 0;
    while(i<n){
        if(gg==1 or s[j]=='a'){
            cout<<s[i];
            i++; j--;
        }
        else{
            cout<<'a';
            gg = 1;
        }
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}