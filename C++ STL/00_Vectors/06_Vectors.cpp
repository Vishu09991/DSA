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
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it<<endl;
    }
    return 0;
}