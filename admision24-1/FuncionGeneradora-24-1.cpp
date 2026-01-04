#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    bool numeroEncontrado = false;
    int a, b, x;

    do {
        cin >> a >> b >> x;
    }while ((1 >= a && a >= 1000 && 1 >= b && b >= 1000)&&(1>= x && x >= pow(10,7)));

    int funcion;

    vector<int> resultados;

    for (int i = 0; i < x; i++) {
        funcion = a + b * i;
        resultados.push_back(funcion);
    }

    for (int i = 0; i < x; i++) {
        if (x == resultados[i]) {
            numeroEncontrado = true;
        }
    }

    if (numeroEncontrado) {
        cout << "SI";
    }
    else {
        cout << "NO";
    }

    return 0;
}
