#include <iostream>
using namespace std;

//ATIVIDADES PROPOSTAS PELO CHATGPT POR TÓPICOS ESTUDADOS

int main(int argc, char *argv[]){
// laços (for, while, do-while) - Implemente um contador crescente e um decrescente com loops
// while= repete enquanto a condição for verdadeira, do-while= executa o bloco pelo menos uma vez, e só depois verifica a condição.
cout << "Contador de 0 á 10 de forma crescente: "<< endl;
for( int i = 0; i < 10; i++){
    cout << i << endl;
    i++;
}
cout << "Contador de 0 á 10 de forma decrescente : "<< endl;
int j = 10;
while ( j >= 1 ){
    cout << j << endl;
    j--;
}

// vetores - Crie um programa que leia e imprima 5 notas armazenadas em um vetor
int vetor [5];
for(int i = 0; i < 5; i++){
    cout << "Digite o valor para armazenar no vetor, posição " <<  i << "º : " << endl;
    cin >> vetor [i];
}
for(int i = 0; i < 5; i++){
    cout << " Valor armazenado na posição " << i << "º : " << vetor[i]<< endl;
}


// matrizes - Implemente uma multiplicação de matrizes 2x2


}