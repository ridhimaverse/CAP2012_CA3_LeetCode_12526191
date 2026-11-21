#include <bits/stdc++.h>
using namespace std;

// LeetCode 83 - Remove Duplicates from Sorted List
class Solution { public: ListNode* deleteDuplicates(ListNode* h) { ListNode*c=h; while(c&&c->next){if(c->val==c->next->val)c->next=c->next->next;else c=c->next;} return h; } };
