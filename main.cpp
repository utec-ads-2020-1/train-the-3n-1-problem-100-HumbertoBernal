#include <iostream>

using namespace std;

int calcularRepeticiones(int n){
    int contador=0;
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
        if( i > j){
            for (int k = j; k <= i ; ++k) {
                contador = calcularRepeticiones(k);
                if (contador > max){
                    max = contador;
                }
            }
        }else if (i < j){
            for (int k = i; k <= j ; ++k) {
                contador = calcularRepeticiones(k);
                if (contador > max){
                    max = contador;
                }
            }
        }else{
            max = calcularRepeticiones(i);
        }
        cout << i <<" "<< j << " "<< max+1 << "\n";
    }
    return 0;
}
