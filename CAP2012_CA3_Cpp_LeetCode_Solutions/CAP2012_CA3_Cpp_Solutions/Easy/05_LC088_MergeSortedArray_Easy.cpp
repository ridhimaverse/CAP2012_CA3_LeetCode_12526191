#include <bits/stdc++.h>
using namespace std;

// LeetCode 88 - Merge Sorted Array
class Solution { public: void merge(vector<int>& a,int m,vector<int>& b,int n) { int i=m-1,j=n-1,w=m+n-1; while(j>=0){if(i>=0&&a[i]>b[j])a[w--]=a[i--];else a[w--]=b[j--];} } };
