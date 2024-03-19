#include <iostream>
using namespace std;

int main()
{
    cout << "set the number's ith bit : ";
    int n, i;
    cin >> n >> i;
    cout << "before n : " << n << endl;

    int ans = 1;
    ans = ans << i;
    n = n | ans;

    cout << "after n : " << n << endl;

    return 0;
}