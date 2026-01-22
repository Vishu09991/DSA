#include<iostream>
using namespace std;

int main(){
    pair < int, pair<float, int>> p = {4,{1.6,12.5}};
    cout << p.first<<endl;
    cout << p.second.first<<endl;
    cout << p.second.second<<endl;
    return 0;
}