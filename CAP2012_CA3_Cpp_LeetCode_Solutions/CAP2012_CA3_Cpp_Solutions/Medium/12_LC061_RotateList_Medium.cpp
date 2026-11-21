#include <bits/stdc++.h>
using namespace std;

// LeetCode 61 - Rotate List
class Solution { public: ListNode* rotateRight(ListNode* h,int k) { if(!h||!h->next||k==0)return h;int n=1;ListNode*t=h;while(t->next){t=t->next;n++;}k%=n;if(!k)return h;t->next=h;int steps=n-k;while(steps--)t=t->next;ListNode*nh=t->next;t->next=nullptr;return nh;} };
