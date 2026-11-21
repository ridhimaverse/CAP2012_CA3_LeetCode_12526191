#include <bits/stdc++.h>
using namespace std;

// LeetCode 92 - Reverse Linked List II
class Solution { public: ListNode* reverseBetween(ListNode* h,int left,int right) { ListNode dummy(0,h),*before=&dummy;for(int i=1;i<left;i++)before=before->next;ListNode*c=before->next;for(int i=0;i<right-left;i++){ListNode*m=c->next;c->next=m->next;m->next=before->next;before->next=m;}return dummy.next;} };
