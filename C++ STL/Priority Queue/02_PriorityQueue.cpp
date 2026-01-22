/*
Minimum Heap
Lowest elemt at the top
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue < int, vector<int>, greater < int >> pq;
    pq.push(10);
    pq.push(20);
    pq.push(48);
    pq.push(6);
    pq.push(485);
    cout << pq.top();
    return 0;
}