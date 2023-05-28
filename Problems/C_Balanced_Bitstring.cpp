#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int i = 0;
    int one = 0;
    int zero = 0;
    int q = 0;
    while(i<k){
        if(s[i]=='1') one++;
        else if(s[i]=='0') zero++;
        else q++;
        i++;
    }
    if(abs(one-zero)>q){
        cout<<"NO"<<endl;
        return;
    }
    int extra_one = k/2 - one;
    int extra_zero = k/2 - zero;
    while(i<n){
        int j = 0;
        while(j<k and i<n){
            if(s[i]=='?') s[i]=s[j];
            else if(s[i]!=s[j] and s[j]!='?'){
                cout<<"NO"<<endl;
                return;
            }
            else if(s[i]!=s[j]){
                if(s[i]=='1'){extra_one--; s[j] = '1';}
                else if(s[i]=='0'){extra_zero--; s[j] = '0';}
                if(extra_one<0 or extra_zero<0){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            i++;
            j++;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}