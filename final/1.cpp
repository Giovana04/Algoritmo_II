#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

bool eAnterior(const Data& data1, const Data& data2) {
    if (data1.ano < data2.ano) {
        return true;
    } else if (data1.ano > data2.ano) {
        return false;
    } else {
        if (data1.mes < data2.mes) {
            return true;
        } else if (data1.mes > data2.mes) {
            return false;
        } else {
            return data1.dia < data2.dia;
        }
    }
}

int main() {
    Data primeiraData, segundaData;

    // Solicita ao usuário para inserir a primeira data
    cout << "Insira a primeira data (DD MM AAAA): ";
    cin >> primeiraData.dia >> primeiraData.mes >> primeiraData.ano;

    // Solicita ao usuário para inserir a segunda data
    cout << "Insira a segunda data (DD MM AAAA): ";
    cin >> segundaData.dia >> segundaData.mes >> segundaData.ano;

    // Verifica se a primeira data é anterior à segunda
    if (eAnterior(primeiraData, segundaData)) {
        cout << "A primeira data é anterior à segunda data." << endl;
    } else {
        cout << "A primeira data não é anterior à segunda data." << endl;
    }

    return 0;
}
