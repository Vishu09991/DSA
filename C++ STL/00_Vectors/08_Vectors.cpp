#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);

    vector<int>::iterator it = v.begin();
    cout << "Before Erasing : ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl<<"After Erasing : ";
    v.erase(v.begin() + 1, v.begin() + 4);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}