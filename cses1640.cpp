#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long x;

    cin >> n >> x;

    map<long long, int> posicoes;

    for (int i = 0; i < n; i++)
    {
        long long valor;
        cin >> valor;

        long long procurado = x - valor;

        if (posicoes.count(procurado))
        {
            cout << posicoes[procurado] + 1 << " " << i + 1 << "\n";
            return 0;
        }

        posicoes[valor] = i;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}