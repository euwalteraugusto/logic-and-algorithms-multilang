#include <iostream>
#include <string>

using namespace std;

int main() {
    int quantidade;
    int codigoStatus; // 0: Falta, 1: Alerta, 2: OK

    cout << "--- Inteligencia de Estoque (C++) ---" << endl;
    cout << "Quantidade atual: ";
    cin >> quantidade;

    // Validação de MVP
    if (quantidade < 0) {
        cout << "Erro critico: Valor inconsistente." << endl;
        return 1; 
    }

    // Classificando para uso no Switch
    if (quantidade == 0) {
        codigoStatus = 0;
    } else if (quantidade <= 5) {
        codigoStatus = 1;
    } else {
        codigoStatus = 2;
    }

    // Seleção por Códigos (Switch)
    switch (codigoStatus) {
        case 0:
            cout << "STATUS: EM FALTA. Faca o pedido imediatamente." << endl;
            break;
        case 1:
            cout << "STATUS: ALERTA. Estoque baixo." << endl;
            break;
        case 2:
            cout << "STATUS: OK. Disponibilidade garantida." << endl;
            break;
        default:
            cout << "Erro desconhecido." << endl;
    }

    return 0;
}