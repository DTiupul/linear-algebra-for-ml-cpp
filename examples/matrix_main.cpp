#include <iostream>
#include "../include/matrix.h"

void ingresarDatosMatriz(Matrix& M){
    for(int i = 0; i < M.rows; i++){
        for(int j = 0; j < M.cols; j++){
            cout << "[" << i + 1 << "," << j + 1 << "] = ";
            cin >> M.data[i][j];
        }
    }
}

void imprimirMatriz(Matrix& M){
    for(int i = 0; i < M.rows; i++){
        for(int j = 0; j < M.cols; j++){
            cout << "[" << i + 1<< "," << j + 1<< "] = " << M.data[i][j] << endl;
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
    imprimirMatriz(D);

    cout << endl;
    cout << "transpose Matrix: " << endl;
    Matrix trans = D.transpose();
    imprimirMatriz(trans);
    
}