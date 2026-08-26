#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    while(cin >> n){
        vector<bool> devolvidas(n, false);

        for(int i = 0; i < n - 1; i++){
            int caneta;
            cin >> caneta;
            devolvidas[caneta - 1] = true;
        }

        for(int i = 0; i < n; i++){
            if(!devolvidas[i]){
                cout << i + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}