#include <bits/stdc++.h>
using namespace std;

// LeetCode 622 - Design Circular Queue
class MyCircularQueue { vector<int>a;int f=0,r=0,c=0,k; public: MyCircularQueue(int n):a(n),k(n){} bool enQueue(int v){if(isFull())return false;a[r]=v;r=(r+1)%k;c++;return true;} bool deQueue(){if(isEmpty())return false;f=(f+1)%k;c--;return true;} int Front(){return isEmpty()?-1:a[f];} int Rear(){return isEmpty()?-1:a[(r-1+k)%k];} bool isEmpty(){return c==0;} bool isFull(){return c==k;} };
