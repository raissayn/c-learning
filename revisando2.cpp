// Continuação da revisão
// Estruturas de controle
#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    int dinheiro = 15;
    if (dinheiro >= 20){
    cout << "Eu vou ao cinema!"<<endl;
    } else if (dinheiro > 10) {
    cout << "Eu vou ao shopping!"<<endl;
    } else if (dinheiro == 5){
    cout << "Irei trabalhar!" <<endl;
    } else {
        cout <<"Eu não irei sair!"<<endl;
    }

    // comando SWITCH
    int num = 10;

    switch(num){
        case 9:
            cout << "número 9"<<endl;
            break;
        case 10:
            cout << "número 10"<<endl;
            break;
        case 11:
            cout << "número 11"<<endl;
            break;
        default: // se não for as outras, então:
            cout << "número não encontrado!"<<endl;
    }
    // posso não utilizar break em cases que seja letra maiúscula e minuscúla!
    char op1 = 'Q';
    switch(op1){
        case 'Q':
        cout << "Você saiu do sistema" << endl;
        case 'q':
        cout << "Você saiu do sistema" << endl;
        break;
        default:
        cout << "Comando inexistente" << endl;
    }

    // EXEMPLO CALCULADORA
int num1, num2, resultado;
char op; // operaçãos

    cout << "digite o primeiro número: ";
    cin >> num1;
    cout << "digite o segundo número: ";
    cin >> num2;
    cout << "digite a operação: ";
    cin >> op;

    switch (op)
    {
    case '+':
        resultado = num1 + num2;
        cout << "SOMA: "<< resultado << endl;        
        break;
    case '-':
        resultado = num1 - num2;
        cout << "SUBTRAÇÃO: "<< resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "MULTIPLICAÇÃO: "<< resultado << endl;
        break;
    case '/':
        resultado = num1 / num2;
        cout << "DIVISÃO: "<< resultado << endl;
        break;
    default:
        cout << "Operação inválida" << endl;
        break;
    }

    
    return 0;
}