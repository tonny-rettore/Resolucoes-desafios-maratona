#include <bits/stdc++.h>
using namespace std;

int main()
{

    string risada, ordem1, ordem2;
    getline(cin, risada);
    for (char c : risada)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ordem1 += c;
        }
    }
    for (int i = risada.size() - 1; i >= 0; i--)
    {
        char c = risada[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ordem2 += c;
        }
    }
    if (ordem1 == ordem2)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}