#include <bits/stdc++.h>
using namespace std;

// LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
class Solution { public: int subtractProductAndSum(int n) { int p=1,s=0; while(n>0){int d=n%10;p*=d;s+=d;n/=10;} return p-s; } };
