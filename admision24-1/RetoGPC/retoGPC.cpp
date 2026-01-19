#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b,x;
    do {
        cin >> a >> b >> x;
    }while ((a < 1 && a > 6 && b < 1 && b > 6) && (20 > x && x >= 100));

    int serie = 0;
    vector<int> numerosSerie;
    bool numeroEncontrado = false;
    int contador = 0;

    for (int i = 0; i <= x; i++) {
        serie += a;
        numerosSerie.push_back(serie);
        serie += b;
        numerosSerie.push_back(serie);
        if (numerosSerie[i] <= x) {
            contador++;
        }
        else {
            break;
        }
    }

    for (int i = 0; i <= contador; i++) {
        if (numerosSerie[i] == x) {
            numeroEncontrado = true;
        }
    }

    if (numeroEncontrado) {
        cout << "usa botas";
    }
    else {
        cout << "usa zapatillas";
    }

    return 0;
}