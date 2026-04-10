#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> sabores = {"Chocolate", "Morango", "Baunilha", "Pistache"};
    double estoqueTotal = 0.0;
    int opcao = 0;

    // Laço Pré-Condicional (while)
    while (opcao != 3) {
        cout << "\n--- Automação de Inventário (C++) ---" << endl;
        cout << "1. Listar Sabores" << endl;
        cout << "2. Adicionar Preço ao Lote" << endl;
        cout << "3. Finalizar e Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "\nLista de Sabores Fixos:" << endl;
            // Laço Incondicional (for)
            for (int i = 0; i < sabores.size(); i++) {
                cout << "ID " << i << ": " << sabores[i] << endl;
            }
        } 
        else if (opcao == 2) {
            double valor;
            cout << "Valor do produto: ";
            cin >> valor;
            estoqueTotal += valor;
            cout << "Acumulado: R$ " << estoqueTotal << endl;
        }
        else if (opcao == 3) {
            cout << "Relatorio Final: R$ " << estoqueTotal << " em produtos." << endl;
        }
    }

    return 0;
}