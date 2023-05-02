#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int T;
 
    cin >> T;
 
    while(T--){
 
        int n;
        string s, t;
 
        cin >> n >> s >> t;
 
        bool can = 1;
 
        int ind = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == t[i]) continue;
            if(s[i] == s[ind] || ind < i) { ++ind, --i; continue; }
            if(ind == n) { can = 0; break; }
 
            if(s[i] == 'a'){
                if(t[i] == 'c') { can = 0; break; }
                if(s[ind] == 'b') swap(s[i], s[ind]);
                else { can = 0; break; }
            }else if(s[i] == 'b'){
                if(t[i] == 'a') { can = 0; break; }
                if(s[ind] == 'c') swap(s[i], s[ind]);
                else { can = 0; break; }
            }else { can = 0; break; }
        }
 
        cout << (can ? "YES" : "NO ") << '\n';
    }
    return 0;
}