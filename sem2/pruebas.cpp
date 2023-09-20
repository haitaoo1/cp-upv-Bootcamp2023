#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> alturas(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> alturas[i];
    }

    std::string resultado;
    for (int i = 1; i < N; ++i) {
        if (alturas[i] > alturas[i - 1]) {
            resultado.push_back('S');
        } else if (alturas[i] < alturas[i - 1]) {
            resultado.push_back('B');
        } else {
            resultado.push_back('I');
        }
    }

    // Imprimir el resultado
    std::cout << resultado << std::endl;

    return 0;
}
