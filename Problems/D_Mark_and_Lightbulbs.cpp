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
    string t; cin>>t;
    if(s[0]!=t[0]){
        cout<<-1<<endl;
        return;
    }
    vector<int> temp1;
    vector<int> temp2;
    char prev1 = s[0];
    char prev2 = t[0];
    int count1 = 1;
    int count2 = 1;
    for(int i = 1; i<n; i++){
        if(s[i]==prev1){
            count1++;
        }
        else{
            temp1.push_back(count1);
            count1 = 1;
            prev1 = s[i];
        }
        if(t[i]==prev2){
            count2++;
        }
        else{
            temp2.push_back(count2);
            count2 = 1;
            prev2 = t[i];
        }
    }
    temp1.push_back(count1);
    temp2.push_back(count2);
    if(temp1.size()!=temp2.size()){
        cout<<-1<<endl;
        return;
    }
    int ans = 0;
    for(int i = 0; i<temp1.size(); i++){
        ans+=abs(temp1[i]-temp2[i]);
        if(i<temp1.size()-1) temp1[i+1]+=temp1[i]-temp2[i];
    }
    cout<<ans<<endl;
    

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}