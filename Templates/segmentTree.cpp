#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> segTree;
//ch
int buildTree(int i, int s, int e, vector<int> &a){
    segTree.resize(4*a.size()+1);
    if(s==e) return segTree[i] = a[s];
    int mid = (s+e)/2;
    return segTree[i] = min(buildTree(2*i+1, s, mid, a), buildTree(2*i+2, mid+1, e, a));
}

int query(int i, int s, int e, int qs, int qe){
    if(qs>e or qe<s) return INT_MAX;
    if(qs<=s and qe>=e) return segTree[i];
    int mid = (s+e)/2;
    return min(query(2*i+1, s, mid, qs, qe), query(2*i+2, mid+1, e, qs, qe));
}

int update(int i, int s, int e, int qi, int val){
    if(qi<s or qi>e) return segTree[i];
    if(s==e) segTree[i] = val;
    int mid = (s+e)/2;
    return segTree[i] = min(update(2*i+1, s, mid, qi, val), update(2*i+2, mid+1, e, qi, val));
}