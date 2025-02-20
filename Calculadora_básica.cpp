#include <iostream>  // Inclui a biblioteca iostream para usar entrada e saída (cin, cout)
using namespace std; // Permite usar o espaço de nomes 'std' sem ter que escrever 'std::' antes de cada comando

int main() {  // Função principal, o ponto de entrada do programa
    double num1, num2;  // Declara duas variáveis do tipo double para armazenar os números
    char operacao;  // Declara uma variável do tipo char para armazenar o operador (+, -, *, /)

    // Exibe o título do programa
    cout << "Calculadora simples em C++\n";

    // Solicita o tipo de operação e lê o operador inserido pelo usuário
    cout << "Escolha uma operacao (+, -, *, /): ";
    cin >> operacao;  // Lê o operador digitado pelo usuário

    // Solicita ao usuário que digite o primeiro número
    cout << "Digite o primeiro numero: ";
    cin >> num1;  // Lê o primeiro número digitado pelo usuário

    // Solicita ao usuário que digite o segundo número
    cout << "Digite o segundo numero: ";
    cin >> num2;  // Lê o segundo número digitado pelo usuário

    // Estrutura switch que verifica qual operação foi escolhida
    switch (operacao) {  
        case '+':  // Se o operador for '+', realiza a soma
            cout << "Resultado: " << num1 + num2 << endl;  // Exibe o resultado
            break;  // Interrompe a execução do switch, já que a operação foi realizada

        case '-':  // Se o operador for '-', realiza a subtração
            cout << "Resultado: " << num1 - num2 << endl;  // Exibe o resultado da subtração
            break;  // Interrompe a execução do switch

        case '*':  // Se o operador for '*', realiza a multiplicação
            cout << "Resultado: " << num1 * num2 << endl;  // Exibe o resultado da multiplicação
            break;  // Interrompe a execução do switch

        case '/':  // Se o operador for '/', realiza a divisão
            // Verifica se o divisor (num2) é diferente de zero para evitar erro de divisão por zero
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;  // Exibe o resultado da divisão
            } else {
                cout << "Erro: Divisao por zero nao e permitida!" << endl;  // Exibe erro se o divisor for zero
            }
            break;  // Interrompe a execução do switch

        default:  // Caso o operador não seja válido, exibe um erro
            cout << "Erro: Operacao invalida!" << endl;  // Exibe mensagem de erro se o operador não for reconhecido
            break;  // Interrompe a execução do switch
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
