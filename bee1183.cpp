#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char o;
    double matriz[12][12];
    double soma = 0.0;
    int elementos = 0;

    cin >> o;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            soma += matriz[i][j];
            elementos++;
        }
    }

    if (o == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if (o == 'M')
    {
        printf("%.1f\n", soma / elementos);
    }

    return 0;
}