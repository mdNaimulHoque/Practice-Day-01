#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int horizontal_area = A * B;
    int vertical_area = C * D;

    if (horizontal_area > vertical_area)
    {
        cout << horizontal_area;
    }
    else if (vertical_area > horizontal_area)
    {
        cout << vertical_area;
    }
    else
    {
        cout << horizontal_area;
    }

    return 0;
}