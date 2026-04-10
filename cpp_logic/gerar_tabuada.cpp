#include <iostream>
using namespace std;

// Versão 2: Modular (Função que não retorna valor, apenas executa)
void gerar_tabuada(int n) {
    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
}

int main() {
    int num;
    cout << "Número para tabuada: ";
    cin >> num;
    gerar_tabuada(num);
    return 0;
}