#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1; // Coeficientes da primeira equação: a1x + b1y = c1
    double a2, b2, c2; // Coeficientes da segunda equação: a2x + b2y = c2

    // Solicita ao usuário para inserir os coeficientes da primeira equação
    cout << "Coeficientes da primeira equacao (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;

    // Solicita ao usuário para inserir os coeficientes da segunda equação
    cout << "Coeficientes da segunda equacao (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    // Calcula a determinante do sistema
    double determinante = a1 * b2 - a2 * b1;

    // Verifica se o sistema é possível e determinado
    if (determinante != 0) {
        // Calcula as soluções para x e y
        double x = (c1 * b2 - c2 * b1) / determinante;
        double y = (a1 * c2 - a2 * c1) / determinante;

        // Imprime as soluções
        cout << "Solucao do sistema:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        cout << "Sistema impossivel ou indeterminado." << endl;
    }

    return 0;
}
