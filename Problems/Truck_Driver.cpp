#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int l1 = 0, l2 = 0, ans = 0;
    int A = 0, B = 0;
    for(int r = 0; r < n; r++){
        if(s[r] == 'a') A++;
        else B++;
        while(B>=b){
            if(s[l1] == 'b') B--;
            l1++;
        }
        while(A>a || s[l2] == 'b'){
            if(s[l2] == 'a') A--;
            l2++;
        }

        if(A>=a && B<b && l2>=l1) ans += l2-l1+1;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}