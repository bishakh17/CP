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
    int a = 0; int b = 0; int c = 0;
    int ans = INT64_MAX;
    for(int i=0; i<n; i++){
        if(!a or a<max(b,c)){a = 0; b = 0; c = 0;}
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else c++;
        if(a+b+c>=2 and a>b and a>c) ans = min(ans,a+b+c);
    }
    a = 0; b = 0; c = 0;
    for(int i=0; i<n; i++){
        if(i<n-1 and s[i]=='a' and a==1 and ((b==2 and c==0) or (c==2 and b==0))){
            if((b==2 and s[i+1]=='b') or c==2 and s[i+1]=='c'){a = 0; b = 0; c = 0;}
        }
        if(!a or a+1<max(b,c) or (a==1 and a+1<b+c)){a = 0; b = 0; c = 0;}
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else c++;
        if(a+b+c>=2 and a>b and a>c) ans = min(ans,a+b+c);
    }
    a = 0; b = 0; c = 0;
    for(int i=0; i<n; i++){
        if(!a or a<=max(b,c)){a = 0; b = 0; c = 0;}
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else c++;
        if(a+b+c>=2 and a>b and a>c) ans = min(ans,a+b+c);
    }
    a = 0; b = 0; c = 0;
    for(int i=0; i<n; i++){
        if(!a or a<b+c){a = 0; b = 0; c = 0;}
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else c++;
        if(a+b+c>=2 and a>b and a>c) ans = min(ans,a+b+c);
    }
    if(ans!=INT64_MAX) cout<<ans<<endl;
    else cout<< -1 <<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}