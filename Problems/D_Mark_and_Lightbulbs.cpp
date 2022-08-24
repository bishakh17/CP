#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string s;
    string t;
    cin>>s>>t;
    int count = 0;
    for(int i = 1; i<n-1; i++){
        if(s[i]==t[i]) continue;
        if(s[i-1]!=s[i+1]){
            s[i]=t[i];
            count++;
            continue;
        }
        int j = i+1;
        while(j<n-1){
            if(s[j-1]!=s[j+1]){
                count += j-i+1;
                break;
            }
            j++;
        }
        if(j==n-1){
            cout<<-1<<endl;
            return;
        }
        else{
            while(j!=i){
                s[j] = 1-s[j];
                j--;
            }
            s[i] = 1-s[i];
        }
    }
    cout<<count<<endl;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}