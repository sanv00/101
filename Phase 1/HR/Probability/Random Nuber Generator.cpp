#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N, A, B, C, res, denom, mgcd;
    cin >> N;
    while (N--)
    {
        cin >> A >> B >> C;
        if (C >= A + B)
        {
            cout << "1/1" << endl;
            continue;
        }
        res = C * C;
        if (C > A)
            res = res - (C - A) * (C - A);
        if (C > B)
            res = res - (C - B) * (C - B);
        denom = 2 * A * B;
        mgcd = gcd(res, denom);
        cout << (res / mgcd) << "/" << (denom / mgcd) << endl;
    }
    return 0;
}