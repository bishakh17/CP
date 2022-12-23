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
    if(s[0]!='Y' and s[0]!='e' and s[0]!='s'){cout("NO");return;}
    for(int i = 1; i<s.size(); i++){
        if(s[i]=='Y' and s[i-1]!='s'){cout("NO");return;}
        else if(s[i]=='e' and s[i-1]!='Y'){cout("NO");return;}
        else if(s[i]=='s' and s[i-1]!='e'){cout("NO");return;}
        else if(s[i]!='Y' and s[i]!='e' and s[i]!='s'){cout("NO");return;}
    }
    cout("YES");
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