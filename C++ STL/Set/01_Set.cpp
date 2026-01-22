/*
Unique and ordered
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(2); // --> {1,2,3}

    auto it = s.find(3);
    return 0;
}