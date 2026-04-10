#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

// Função Void: Apenas executa uma ação (Imprimir)
void exibirMenu() {
    cout << "\n>>>> SISTEMA DENER v2.0 <<<<" << endl;
    cout << "1. Adicionar Sabor" << endl;
    cout << "2. Adicionar Valor" << endl;
    cout << "3. Ver Relatorio" << endl;
    cout << "4. Encerrar" << endl;
    cout << "Escolha: ";
}

// Função com Retorno: Processa dados e entrega resultado
double calcularEstoque(vector<double> v) {
    double total = 0;
    for(double preco : v) total += preco;
    return total;
}

int main() {
    vector<string> sabores;
    vector<double> precos;
    int opcao = 0;

    while (opcao != 4) {
        exibirMenu();
        cin >> opcao;

        if (opcao == 1) {
            string s;
            cout << "Sabor: ";
            cin >> s;
            sabores.push_back(s);
        } else if (opcao == 2) {
            double p;
            cout << "Preco: ";
            cin >> p;
            precos.push_back(p);
        } else if (opcao == 3) {
            cout << "Total: R$ " << calcularEstoque(precos) << endl;
        }
    }
    return 0;
}