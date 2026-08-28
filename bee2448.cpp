#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> casas(N);

    for (int i = 0; i < N; i++)
    {
        cin >> casas[i];
    }

    int posicao_atual = 0;
    int tempo = 0;

    for (int i = 0; i < M; i++)
    {
        int encomenda;
        cin >> encomenda;

        int posicao_destino;

        for (int j = 0; j < N; j++)
        {
            if (casas[j] == encomenda)
            {
                posicao_destino = j;
                break;
            }
        }

        tempo += abs(posicao_atual - posicao_destino);

        posicao_atual = posicao_destino;
    }

    cout << tempo << endl;

    return 0;
}