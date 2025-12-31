//https://atcoder.jp/contests/abc296/tasks/abc296_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int r, c;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ch;
            if (ch == '*')
            {
                r = i;
                c = j;
            }
        }
    }

    char col = 'a' + c;
    int row = 8 - r;

    cout << col << row << "\n";

    return 0;
}