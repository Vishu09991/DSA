#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);

    cout << v.size() <<endl; //Returns Size
    v.pop_back();//Removes last element -->{20,30,40}
    cout << v[3] << endl;
    cout << v.empty();
    return 0;
}