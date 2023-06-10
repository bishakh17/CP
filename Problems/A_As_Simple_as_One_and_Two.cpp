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
    string one = "one";
    string two = "two";
    vector<int> ans;
    for(int i = 0; i<n-2; i++){
        int t = -1;
        int gg = 1;
        for(int j = i; j<i+3; j++){
            if(t==-1){
                if(s[j]=='o') t = 1;
                else if(s[j]=='t') t = 2;
                else{
                    t=-1;
                    break;
                }
            }
            else if(t==1){
                if(s[j]!=one[j-i]){
                    t=-1;
                    break;
                }
            }
            else if(t==2){
                if(s[j]!=two[j-i]){
                    t=-1;
                    break;
                }
            }
        }
        if(t==2){
            t = 3;
            for(int j = i+2; j<i+5 && j<n; j++){
                if(s[j]!=one[j-i-2]){
                    t=2;
                    break;
                }
            }
        }
        if(t==1){
            ans.push_back(i+2);
            i+=2;
        }
        else if(t==2){
            ans.push_back(i+2);
            i+=2;
        }
        else if(t==3){
            ans.push_back(i+3);
            i+=4;
        }
    }
    cout(ans.size());
    for(auto x:ans){
        cout<<x<<" ";
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