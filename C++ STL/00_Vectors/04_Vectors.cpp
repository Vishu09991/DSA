#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);//Stores 0
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.emplace_back(23);
    for (int i = 0; i <= 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}