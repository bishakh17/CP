#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){  
    string s;
    cin>>s;
    int n=s.size();
    n = n/2;
    for(int i=0;i<n;i++){
        if(s[i]!=s[0]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; 
    cin >> t;
    while(t>0) {
        solve();
        t--;
    }
    return 0;
}