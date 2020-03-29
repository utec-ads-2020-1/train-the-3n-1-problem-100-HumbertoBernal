#include <iostream>

using namespace std;

int calcularRepeticiones(int n){
    int contador = 1;
    while(n !=1){
        if (n%2 != 0) {
            ++contador;
            n= 3*n +1;
        } else{
            ++contador;
            n = n/2;
        }
    }
   return contador;
}

int main() {
    int max, contador=0;
    int i, j;
    while (cin){
        cin >> i >> j;
        max = 0;
        for (int k = i; k < j ; ++k) {
            contador = calcularRepeticiones(k);
            if (contador > max){
                max = contador;
            }
        }
        cout << "\n"<< i <<" "<< j << " "<< max;
    }
    return 0;
}
