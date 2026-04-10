#include <iostream>
#include <string>
using namespace std;

// Versão 2: Modular
bool validar_senha(string senha) {
    return senha.length() >= 8;
}

int main() {
    string senha;
    do {
        cout << "Digite a senha (min 8 chars): ";
        cin >> senha;
    } while (!validar_senha(senha));
    
    cout << "Senha aceita!" << endl;
    return 0;
}