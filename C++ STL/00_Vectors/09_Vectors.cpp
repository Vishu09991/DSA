/*
Erase
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);
    vector<int>::iterator it = v.begin();
    for (auto it = v.begin(); it < v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    v.insert(v.begin(), 10);
    for (auto it = v.begin(); it < v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    v.insert(v.begin() + 1, 15);
    for (auto it = v.begin(); it < v.end();it++){
        cout << *it << " ";
    }
    return 0;
}