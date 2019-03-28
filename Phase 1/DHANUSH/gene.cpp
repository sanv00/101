#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void find_code(int n)
{
}
int main()
{
    int n, i = 0, j = 0, k = 0, l, lol = 0;
    char gcode[4][2] = {"A", "T", "G", "C"};
    char gseries[300][300];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                for (l = 0; l < 4; l++)
                {
                    strcat(gseries[lol], gcode[i]);
                    strcat(gseries[lol], gcode[j]);
                    strcat(gseries[lol], gcode[k]);
                    strcat(gseries[lol], gcode[l]);
                    lol++;
                }
            }
        }
    }

    cin >> n;

    int temp[100], count = 0;

    if (n >= 0 && n <= 9)
    {
        cout << gseries[n];
    }
    else
    {
        i = 0;
        int var;
        while (n != 0)
        {
            count++;
            var = n % 10;
            temp[i++] = var;
            n = n / 10;
        }
        for (i = count - 1; i >= 0; i--)
        {
            cout << gseries[temp[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}
