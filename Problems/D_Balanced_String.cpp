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
    int cnt = 0;
    int z = 0;
    int o = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0') z++;
        else o++;
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            cnt+=z;
            o--;
        }
        else{
            cnt-=o;
            z--;
        }

    }
    if(cnt==0){
        cout(0);
        return;
    }
    if(cnt>0){
        int ans = 0;
        while(cnt!=0){
            ans++;
            int maxi = 0;
            int id1 = -1;
            int id2 = -1;
            for(int i = 0; i<n; i++){
                if(s[i]=='0') continue;
                for(int j = i+1; j<n; j++){
                    if(s[j]=='1') continue;
                    int temp = (j-i)*2;
                    if(temp<=cnt){
                        if(temp>maxi){
                            maxi = temp;
                            id1 = i;
                            id2 = j;
                        }
                    }
                }
            }
            cnt-=maxi;
            s[id1] = '0';
            s[id2] = '1';
        }
        cout(ans);
        return;
    }
    else{
        cnt*=-1;
        int ans = 0;
        while(cnt!=0){
            ans++;
            int maxi = 0;
            int id1 = -1;
            int id2 = -1;
            for(int i = 0; i<n; i++){
                if(s[i]=='1') continue;
                for(int j = i+1; j<n; j++){
                    if(s[j]=='0') continue;
                    int temp = (j-i)*2;
                    if(temp<=cnt){
                        if(temp>maxi){
                            maxi = temp;
                            id1 = i;
                            id2 = j;
                        }
                    }
                }
            }
            cnt-=maxi;
            s[id1] = '1';
            s[id2] = '0';
        }
        cout(ans);
        return;
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