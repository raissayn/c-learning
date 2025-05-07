#include <iostream>
#include "my_math.h" //

using namespace std;

int main(int argc, char *argv[]){
    int n =5;
    int b =2;
    cout << "Fatorial de " << n << ": " << fatorial(5) << endl;
    cout << "Área do quadrado com lado: "<< n << ": "<< area_quadrado(5) << endl;
    cout << "Área do retângulo com altura "<< n << " e base "<< b << " é : "<< area_retangulo(5,2) << endl;
    return 0;
}