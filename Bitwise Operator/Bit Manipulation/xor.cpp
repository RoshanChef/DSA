#include <iostream>
using namespace std;
int xor_n(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    // //unique from pair of numbers
    // int ar[]={2,1,2,5,7,5,6,7,6};
    // int len = sizeof(ar)/sizeof(int),ans = 0;
    // for (int i = 0; i < len; i++)
    // {
    //     ans^=ar[i];
    // }
    // cout<<"anser is : "<<ans;

    // //swapping
    // cout << "before : a -> " << a << "            b -> " << b << endl;
    // int a = 5, b = 7;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout << "after : a -> " << a << "            b -> " << b << endl;

    // // swapping
    // int a = 5, b = 7;
    // cout << "before : a -> " << a << "            b -> " << b << endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << "after : a -> " << a << "            b -> " << b << endl;

    // //xor from (1,n)
    // int n, ans = 1;
    // cout << "enter the num ";
    // cin >> n;

    // // theta(n)
    // for (int i = 2; i <= n; i++)
    // {
    //     ans ^= i;
    // }
    // cout << ans;

    // // theta(1)
    // cout << xor_n(n);

    // xor bw (L , R)
    int l, r;
    int ans = 0;
    cout << "enter the range start  , end : ";
    cin >> l >> r;
    ans = xor_n(l-1) ^ xor_n(r);
    cout <<"your answer is : "<< ans;

    return 0;
}