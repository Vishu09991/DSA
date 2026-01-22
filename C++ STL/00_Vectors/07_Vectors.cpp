/*
Erase
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.emplace_back(87);
    v.emplace_back(7);
    v.emplace_back(56);
    v.emplace_back(48);

    vector<int>::iterator it = v.begin();
    // Before Erasing
    cout << "Before Erasing : ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // After Erasing
    cout << "After Erasing : ";
    v.erase(v.begin());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}