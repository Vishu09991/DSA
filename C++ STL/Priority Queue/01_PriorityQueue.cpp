/*
What is priority_queue?

priority_queue is a heap-based container adapter where the highest-priority element is always on top.

Default: Max-Heap
Highest value comes out first
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(69);
    pq.push(100);
    pq.push(10);
    pq.push(11); //-->{100,69,11,10,1};
    cout << pq.top();
    return 0;
}