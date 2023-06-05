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
    vector<int> mp(26,0);
    for(int i=0;i<n;i++){
        mp[s[i]-'a']++;
    }
    for(int i = 0; i<26; i++){
        if(!mp[i]){
            cout<<char(i+'a')<<endl;
            return;
        }
    }
    for(int i = 0; i<26; i++){
        for(int j = 0; j<26; j++){
            string temp = "";
            temp+=char(i+'a');
            temp+=char(j+'a');
            int t = 0;
            for(int k = 0; k<n-1; k++){
                if(s[k]==temp[0] && s[k+1]==temp[1]){
                    t=1;
                    break;
                }
            }
            if(!t){
                cout<<temp<<endl;
                return;
            }
        }
    }
    for(int i = 0; i<26; i++){
        for(int j = 0; j<26; j++){
            for(int k = 0; k<26; k++){
                string temp = "";
                temp+=char(i+'a');
                temp+=char(j+'a');
                temp+=char(k+'a');
                int t = 0;
                for(int l = 0; l<n-2; l++){
                    if(s[l]==temp[0] && s[l+1]==temp[1] && s[l+2]==temp[2]){
                        t=1;
                        break;
                    }
                }
                if(!t){
                    cout<<temp<<endl;
                    return;
                }
            }
        }
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