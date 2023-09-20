/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;

    int a[n]; // [3, 1, 2]
    sort(a, a+n);

    string s = "test";
    sort(s.begin(), s.end());

    vector<int> v(n);  // [3, 1, 2]
    sort(v.begin(), v.end());
}  
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<pair<int, int>, int>> participants;

    for (int i = 0; i < N; i++) {
        int S, P;
        cin >> S >> P;
        participants.push_back({{S, P}, i + 1});  // Usamos -P para que la penalización se ordene en orden creciente
    }

    // Ordenamos los participantes según los criterios dados
    sort(participants.begin(), participants.end());

    // Imprimimos el ranking
    for (int i = 0; i < N; i++) {
        cout << participants[i].first.first << " " << -participants[i].first.second << endl;
    }

    return 0;
}
