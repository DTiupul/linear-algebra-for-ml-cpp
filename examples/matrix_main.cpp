#include <iostream>
#include "../include/matrix.h"

void ingresarDatosMatriz(Matrix& M){
    for(int i = 0; i < M.rows; i++){
        for(int j = 0; j < M.cols; j++){
            cout << "[" << i << "," << j << "] = ";
            cin >> M.data[i][j];
        }
    }
}

void imprimirMatriz(Matrix& M){
    for(int i = 0; i < M.rows; i++){
        for(int j = 0; j < M.cols; j++){
            cout << "[" << i << "," << j << "] = " << M.data[i][j] << endl;
        }
    }
}
int main(){
    int m, n, p, q;
    cout << "Ingrese las dimensiones de la matriz A: " << endl;
    cin >> m >> n;
    Matrix A(m,n);
    ingresarDatosMatriz(A);
    cout << endl;

    cout << "Ingrese las dimensiones de la matriz B: " << endl;
    cin >> p >> q;
    Matrix B(p,q);
    ingresarDatosMatriz(B);

    
    Matrix C = A.multiply(B);
    cout << "A x B (matricial product) is: " << endl;
    imprimirMatriz(C);
    cout << endl;
    
    Matrix D = B.multiply(A);
    cout << "B x A (matricial product) is: " << endl;
    for(int i = 0; i < D.rows; i++){
        for(int j = 0; j < D.cols; j++){
            cout << "D[" << i << "," << j << "] = " << D.data[i][j] << endl;
        }
    }
    
}