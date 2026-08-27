#include <bits/stdc++.h>
using namespace std;

bool comparaTamanho(string a, string b)
{
    return a.size() > b.size();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string linha;
        getline(cin, linha);

        stringstream ss(linha);
        vector<string> palavras;
        string palavra;
        while (ss >> palavra)
        {
            palavras.push_back(palavra);
        }

        stable_sort(palavras.begin(), palavras.end(), comparaTamanho);
           
        for (int j = 0; j < (int)palavras.size(); j++)
        {
            if (j > 0)
                cout << " ";
            cout << palavras[j];
        }
        cout << "\n";
    }

    return 0;
}