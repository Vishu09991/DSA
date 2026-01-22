#include <iostream>
using namespace std;
int reversenum(int n)
{
    int originalnum = n;
    int remainder;
    int reverseNum = 0;
    while (originalnum > 0)
    {
        remainder = originalnum % 10;
        reverseNum = (reverseNum * 10) + remainder;
        originalnum /= 10;
    }
    return reverseNum;
}
int main()
{
    cout << reversenum(123000210);

    return 0;
}