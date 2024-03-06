#include <iostream>
using namespace std;

double calcularAreaCirculo(double raio) {
    double area = 3.14159 * raio * raio; // Fórmula para a área do círculo: π * raio^2
    cout << "Raio: " << raio << endl;
    cout << "Area calculada: " << area << endl;
    return area;
}

int main() {
    double raio;

    // Solicita ao usuário para inserir o raio do círculo
    cout << "Insira o raio do circulo: ";
    cin >> raio;

    // Calcula e exibe a área do círculo
    double area = calcularAreaCirculo(raio);
    cout << "Area do circulo: " << area << endl;

    return 0;
}
