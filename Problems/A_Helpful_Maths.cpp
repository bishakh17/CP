#include <iostream>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int arr[] = {0,0,0};
    for(int i = 0; i<n; i++){
        if(s[i]=='1') arr[0]++;
        if(s[i]=='2') arr[1]++;
        if(s[i]=='3') arr[2]++;
    }
    for(int i = 0; i<n; i=i+2){
        if(arr[0]!=0){
            s[i]='1';
            arr[0]--;
        }
        else if(arr[1]!=0){
            s[i]='2';
            arr[1]--;
        }
        else s[i]='3';
    }
    cout<<s<<endl;
    return;
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}