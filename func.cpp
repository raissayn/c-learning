#include <iostream>
using namespace std;

// caso a função estive embaixo:
// bool par(int num);

// VOID = não retorna nada
void mensagem();

bool par(int num){
    if ( num % 2 == 0){
        return true;
    }else{
        return false;
    }
}


int main(int argc, char *argv[]){
    int n;
    mensagem(); // chamando função void
    cout << "Digite um número: ";
    cin >> n;
    if (par (n)){
        cout << " É PAR!"<<endl;
    } else {
        cout << "É IMPAR!"<<endl;
    }
    return 0;
}

void mensagem(){
    cout << "aprendendo c++" <<endl;
    // não return NADA
}

// SOBRECARGA DE FUNÇÕES - Nomes podem ser iguais se os argumentos são diferentes