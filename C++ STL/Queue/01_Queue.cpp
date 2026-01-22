#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.emplace(3);
    q.emplace(4);
    q.push(5);//-->{3,4,5}
    q.back() += 6;
    cout << q.front() << endl;
    cout << q.back();
    return 0;
}