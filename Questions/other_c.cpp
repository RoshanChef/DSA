#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, temp;
    cout << "enter the number => ";
    cin >> n;

    temp = ~n;

    int bit = 0;
    while (n)
    {
        bit++;
        n = n >> 1;
    }
    n = (pow(2, bit) - 1);
    n = temp & n;
    cout << n;
    return 0;
}