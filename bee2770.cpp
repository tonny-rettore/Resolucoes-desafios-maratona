#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, m;
    while (cin >> x >> y >> m)
    {
        while (m--)
        {
            int xi, yi;
            cin >> xi >> yi;
            bool cabe_normal = (x >= xi && y >= yi);
            bool cabe_girando = (x >= yi && y >= xi);
            if (cabe_normal || cabe_girando)
                cout << "Sim\n";
            else
                cout << "Nao\n";
        }
    }

    return 0;
}