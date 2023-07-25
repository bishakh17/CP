#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sparseTable;

//change this function to change the operation(min,max,gcd,non-overlapable) to be performed on the range of elements.
int func(int a, int b){
    return min(a,b);
}

void buildSparseTable(vector<int> &a){
    int n = a.size();
    int m = log2(n)+1;
    sparseTable.resize(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        sparseTable[i][0] = a[i];
    }
    for(int j = 1; j<m; j++){
        int range = 1<<j;
        int prevRange = 1<<(j-1);
        for(int i = 0; i<=n-range; i++){
            sparseTable[i][j] = func(sparseTable[i][j-1],sparseTable[i+prevRange][j-1]);
        }
    }
}

int query(int l, int r){
    int range = r-l+1;
    int j = log2(range);
    return func(sparseTable[l][j],sparseTable[r-(1<<j)+1][j]);
}