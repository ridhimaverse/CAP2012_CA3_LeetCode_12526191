#include <bits/stdc++.h>
using namespace std;

// LeetCode 155 - Min Stack
class MinStack { stack<pair<int,int>> st; public: MinStack(){} void push(int v){int m=st.empty()?v:min(v,st.top().second);st.push({v,m});} void pop(){st.pop();} int top(){return st.top().first;} int getMin(){return st.top().second;} };
