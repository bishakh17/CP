#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int kmp(string& s, string& t){
    int n = s.size();
    int m = t.size();
    vector<int> lps(m,0);
    int i = 0;
    int j = 1;
    while(j<m){
        if(t[i]==t[j]){
            lps[j] = i+1; // lps[j-1]+1 == i+1
            i++;
            j++;
        }
        else{
            if(i==0){
                lps[j] = 0;
                j++;
            }
            else{
                i = lps[i-1]; // if it is not equal then we will check for the previous prefix that is equal to the suffix of the current prefix and then we will check if the current character is equal to the next character of the previous prefix
            }
        }
    }
    i = 0;
    j = 0;
    while(i<n){
        if(s[i]==t[j]){
            i++;
            j++;
            if(j==m){
                return i-m;
            }
        }
        else{
            if(j==0){
                i++;
            }
            else{
                j = lps[j-1];
            }
        }
    }
    return -1;
    
}