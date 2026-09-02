#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int cidade = 0;

    while (cin >> n && n != 0)
    {
        cidade++;

        if (cidade > 1) {
            printf("\n");
        }

        printf("Cidade# %d:\n", cidade);

        vector<int> consumo(201, 0);
        int total_consumo = 0;
        int total_pessoas = 0;

        while (n--)
        {
            int x, y;
            cin >> x >> y;

            total_pessoas += x;
            total_consumo += y;

            int c = y / x;
            consumo[c] += x;
        }

        bool primeiro = true;
        for (int c = 0; c <= 200; c++)
        {
            if (consumo[c] > 0)
            {
                if (primeiro)
                {
                    printf("%d-%d", consumo[c], c);
                    primeiro = false;
                }
                else
                {
                    printf(" %d-%d", consumo[c], c);
                }
            }
        }
        cout << '\n';

        double media = (double)total_consumo / total_pessoas;
        double media_truncada = floor(media * 100.0) / 100.0;

        printf("Consumo medio: %.2f m3.\n", media_truncada);
    }

    return 0;
}