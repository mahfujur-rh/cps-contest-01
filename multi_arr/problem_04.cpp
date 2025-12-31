#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int y, r;
        cin >> y >> r;
        int red = r;
        int yellow = y / 2;
        int res = red + min(yellow, n - red);
        cout << res << endl;
    }
    return 0;
}
