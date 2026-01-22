#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ls;
    ls.emplace_back(3); // Add at the end
    ls.emplace_front(5); // Add at the front
    ls.emplace_front(55); // Add at the front
    ls.emplace_back(8); // Add at the end
    for(int x : ls){
        cout << x << " ";
    }
    return 0;
}
//No random access (list[i] ❌)