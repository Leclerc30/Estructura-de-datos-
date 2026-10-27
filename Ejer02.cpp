#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float nota;
};

int main() {
    Estudiante estudiante;

    cout << "Ingrese el nombre: ";
    getline(cin, estudiante.nombre);
    cout << "Ingrese la edad: ";
    cin >> estudiante.edad;
    cout << "Ingrese la nota: ";
    cin >> estudiante.nota;

    cout << "\nDatos del estudiante\n";
    cout << "Nombre: " << estudiante.nombre << '\n';
    cout << "Edad: " << estudiante.edad << '\n';
    cout << "Nota: " << estudiante.nota << '\n';

    return 0;
}
