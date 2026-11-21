#include <bits/stdc++.h>
using namespace std;

// LeetCode 20 - Valid Parentheses
class Solution { public: bool isValid(string s) { stack<char> st; for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else{if(st.empty())return false;char o=st.top();st.pop();if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{'))return false;}} return st.empty(); } };
