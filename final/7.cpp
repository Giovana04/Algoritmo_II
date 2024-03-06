#include <iostream>
#include <cmath>
using namespace std;

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(const Ponto& p1, const Ponto& p2) {
    double distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distancia;
}

int main() {
    Ponto ponto1, ponto2;

    // Teste com diferentes posições dos pontos
    ponto1.x = 1.0;
    ponto1.y = 2.0;

    ponto2.x = 4.0;
    ponto2.y = 6.0;

    // Calcula a distância entre os dois pontos
    double distancia = calcularDistancia(ponto1, ponto2);

    // Exibe a distância calculada
    cout << "A distancia entre os pontos (" << ponto1.x << ", " << ponto1.y << ") e (" << ponto2.x << ", " << ponto2.y << ") e: " << distancia << endl;

    return 0;
}
