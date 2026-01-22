/*
v.end() does NOT point to the last element

It points to one position AFTER the last element
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(5);
    v.emplace_back(34);
    v.emplace_back(58);
    v.emplace_back(55);

    vector<int>::iterator it = v.begin();
    cout << *(it)<<endl;
    it++;
    cout << *(it);

    cout << endl;
    vector<int>::iterator itr = v.end();
    // cout << *(itr);
    itr--;
    cout << *(itr);
    cout << v.back();
    return 0;
}