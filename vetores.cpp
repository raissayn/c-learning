#include <iostream>
using namespace std;


int main(int argc, char *argv[]){

    int vetor[4]; // [quant. máxima]
    
    cout << "Primeiro vetor:" << endl;
    
    for(int i = 0; i < 4; i++){ // lembrando que i começa em 0!!!
        vetor [i] = i; // guardar valores posição no vetor
        // último elemento = vetor [99] !!!
    }
    for(int i = 0; i < 4; i++){ // somente mostra os elementos do vetor
        cout << vetor [i] << endl;
    }

    int vetor1[4] ={1,2,3,4};
    
    cout << "Segundo vetor:" <<endl;

    for(int i = 0; i < 4; i++){ // somente mostra os elementos do vetor
        cout << vetor1[i] << endl;
    }

    cout << "Segundo elemento: "<<vetor1[1]<<endl;
    cout << sizeof(vetor1) <<endl;
    
    return 0;
}

/*poderiamos inicializar com:
int vetor[4]
int vetor[4] = {1,2,3,4};
ou podemos omitir
int vetor[] = {1,2,3,4};
*/ 
