/*
In C++, a pair is a container provided by the STL (Standard Template Library) that stores two values together.
These values can be of the same or different data types.
*/

#include<iostream>
using namespace std;

int main(){
    pair<int, int> p = {1, 5};
    cout << p.second;
    return 0;
}