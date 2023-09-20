#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int N1, N2, N3;
    cin >> N1;

    vector<int> enteros(N1);
    for (int i = 0; i < N1; i++) {
        cin >> enteros[i];
        enteros[i] *= 2;
    }

    cin >> N2;

    vector<char> caracteres(N2);
    for (int i = 0; i < N2; i++) {
        cin >> caracteres[i];
        caracteres[i] = toupper(caracteres[i]);
    }

    cin >> N3;

    vector<string> palabras(N3);
    for (int i = 0; i < N3; i++) {
        cin.ignore();
        getline(cin, palabras[i]);
        for (char& c : palabras[i]) {
            if (tolower(c) == 'a' || tolower(c) == 'e' ||
                tolower(c) == 'i' || tolower(c) == 'o' ||
                tolower(c) == 'u') {
                c = '0';
            }
        }
    }
    for (int i = 0; i < N1; i++) {
       cout << enteros[i] << ' ';
    }
        cout << '\n';

    for (int i = 0; i < N2; i++) {
        cout << caracteres[i] << ' ';
    }
        cout << '\n';

    for (int i = 0; i < N3; i++) {
        cout << palabras[i] << ' ';
    }
        cout << '\n';

    return 0;
}