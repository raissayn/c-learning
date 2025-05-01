// introdução / revisão
# include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Hello World" << endl;
    // declaração de variáveis 
    int idade;
    idade = 20;
    cout << "Idade: " << idade << endl;
    // operadores
    int n1, n2, resultado;
    n1 = 10;
    n2 = 20;
    resultado = n1 + n2;
    cout << "Resultado: " << resultado << endl;
    // resultado float, uma das variaveis tem que ser float
    // resultado = (float)n1/n2 
    int divResultado;
    divResultado = n2 % n1; // % resto divisão
    cout << "Resultado RESTO divisão: " << divResultado << endl;
    // n++ = n+1 // n = n + 1 == n += 1

    //variáveis caracteres/ CHAR
    char c = 'a';
    cout << c;

    return 0;
}