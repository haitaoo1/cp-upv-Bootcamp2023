#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int array1[N];
    int array2[N];

    for (int i = 0; i < N; i++) {
        cin >> array1[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> array2[i];
    }

    // Imprimir los elementos de forma alternante
    for (int i = 0; i < N; i++) {
        cout << array1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << array2[i] << " ";
    }

    return 0;
}
