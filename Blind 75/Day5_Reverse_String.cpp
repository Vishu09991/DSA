/*
Leetcode 151
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_yeah(string s, int n)
{
    reverse(s.begin(), s.end());
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while(i<n && s[i]!=' '){
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length()>0){
            ans += " " + word;
        }
    }
    cout << ans.substr(1);
}
int main()
{
    string s;
    cout << "Enter String";
    getline(cin, s);
    int n = s.length();
    reverse_yeah(s, n);
    return 0;
}