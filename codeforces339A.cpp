#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> numeros;

    for (char c : s)
    {
        if (c != '+')
        {
            numeros.push_back(c);
        }
    }

    sort(numeros.begin(), numeros.end());

    bool primeiro = true;
    for (char c : numeros)
    {
        if (!primeiro)
            cout << "+";
        cout << c;
        primeiro = false;
    }
    cout << "\n";

    return 0;
}