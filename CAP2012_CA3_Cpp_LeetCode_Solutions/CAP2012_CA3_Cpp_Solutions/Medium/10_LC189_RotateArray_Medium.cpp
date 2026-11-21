#include <bits/stdc++.h>
using namespace std;

// LeetCode 189 - Rotate Array
class Solution { public: void rotate(vector<int>& a,int k) { int n=a.size();if(!n)return;k%=n;reverse(a.begin(),a.end());reverse(a.begin(),a.begin()+k);reverse(a.begin()+k,a.end()); } };
