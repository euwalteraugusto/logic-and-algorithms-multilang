#include <iostream>
#include <vector> // Necessário para coleções dinâmicas
#include <string>
#include <numeric> // Para a função accumulate

using namespace std;

int main() {
    vector<string> sabores = {"Chocolate", "Morango"};
    vector<double> precos;
    int opcao = 0;

    while (opcao != 3) {
        cout << "\n--- Automação de Listas (C++) ---" << endl;
        cout << "1. Novo Sabor\n2. Novo Preco\n3. Sair" << endl;
        cin >> opcao;

        if (opcao == 1) {
            string s;
            cout << "Nome do sabor: ";
            cin.ignore();
            getline(cin, s);
            sabores.push_back(s); // Adiciona ao final do vetor
        } 
        else if (opcao == 2) {
            double p;
            cout << "Valor: ";
            cin >> p;
            precos.push_back(p);
        }
        else if (opcao == 3) {
            // Soma todos os elementos da coleção de preços
            double total = accumulate(precos.begin(), precos.end(), 0.0);
            cout << "Sabores cadastrados: " << sabores.size() << endl;
            cout << "Valor total: R$ " << total << endl;
        }
    }
    return 0;
}