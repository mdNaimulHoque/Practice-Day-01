#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b + c)
    {
        cout << "Yes";
    }

    else if (b == a + c)
    {
        cout << "Yes";
    }
    else if (c == a + b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}