#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int isPalindrome(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return 0;
    }
    return 1;
}
string reverse(string s){
    int n = s.size();
    string ans = "";
    for(int i=n-1;i>=0;i--){
        ans+=s[i];
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    int t = 0;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(isPalindrome(a[i])) t=1;
    }
    if(t){
        cout("YES");
        return;
    }
    unordered_map<string,int> m;
    for(int i=0;i<n;i++){
        string temp = reverse(a[i]);
        if(m[temp]){
            cout("YES");
            return;
        }
        temp.pop_back();
        if(m[temp]){
            cout("YES");
            return;
        }
        m[a[i]]++;
    }
    m.clear();
    for(int i = n-1; i>=0; i--){
        string temp = reverse(a[i]);
        if(m[temp]){
            cout("YES");
            return;
        }
        temp = temp.substr(1);
        if(m[temp]){
            cout("YES");
            return;
        }
        m[a[i]]++;
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}