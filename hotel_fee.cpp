#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    if (N > K)
    {
        int kDaysFee = K * X;
        int otherDays = N - K;
        int otherDaysFee = otherDays * Y;
        int nDaysFee = kDaysFee + otherDaysFee;
        cout << nDaysFee;
    }
    else
    {
        cout << N * X;
    }

    return 0;
}