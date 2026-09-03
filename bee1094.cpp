#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int qtdc = 0, qtdr = 0, qtds = 0, qtdtotal = 0, x;
    char tipo;
    while (n--)
    {

        cin >> x >> tipo;
        if (tipo == 'C')
            qtdc += x;
        else if (tipo == 'R')
            qtdr += x;
        else
            qtds += x;
        qtdtotal += x;
    }

    printf("Total: %d cobaias\n", qtdtotal);
    printf("Total de coelhos: %d\n", qtdc);
    printf("Total de ratos: %d\n", qtdr);
    printf("Total de sapos: %d\n", qtds);
    printf("Percentual de coelhos: %.2f %%\n", (float)(qtdc * 100) / qtdtotal);
    printf("Percentual de ratos: %.2f %%\n", (float)(qtdr * 100) / qtdtotal);
    printf("Percentual de sapos: %.2f %%\n", (float)(qtds * 100) / qtdtotal);

    return 0;
}