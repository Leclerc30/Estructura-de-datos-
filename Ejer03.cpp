#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int *p = numeros;
    int suma = 0;

    cout << "\nNumeros ingresados:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(p+i) << '\n';
        suma += *(p+i);
    }

    cout << "Suma total: " << suma << '\n';

    return 0;
}
