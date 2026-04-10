#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacao;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Escolha a operação (+, -, *, /): ";
    cin >> operacao;

    if (operacao == '+') cout << "Resultado: " << num1 + num2;
    else if (operacao == '-') cout << "Resultado: " << num1 - num2;
    else if (operacao == '*') cout << "Resultado: " << num1 * num2;
    else if (operacao == '/') cout << "Resultado: " << num1 / num2;
    else cout << "Operação inválida.";

    return 0;
}