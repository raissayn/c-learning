#include <iostream>
using namespace std;
int num_global = 12; // variável global

void foo(){ //função que não retorna nada, só mostra
    int num = 10; // variável local
    static int num_static = 1;
    num++;
    cout << "variável local: " << num << endl;
    num_static++;
    cout << "variável estática: " << num_static << endl;
}
int main(int argc, char *argv[]){
    cout << "Váriavel global: " << num_global << endl;
    foo(); //chamada da função, n precisou dar parametros
    foo();
    foo();
    return 0;
}