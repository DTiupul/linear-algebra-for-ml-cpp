#include <iostream>
#include "../include/matrix.h"
#include "../include/vector.h"
using namespace std;
// For this stage we will be creating a simulation for a nueral network
// y = Wx
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
    // Ask the user for the length of the vector
    int n;
    cout << "Input vector length: ";
    cin >> n;

    Vector x(n);

    for(int i = 0; i < n; i++){
        cout << "x[" << i + 1 << "]: ";
        cin >> x.data[i];
    }
    
    int p,q;
    cout << "\ninput matrix lenght (rows and colums): ";
    cin >> p >> q;
    Matrix W(p,q);
    ingresarDatosMatriz(W);

     
    cout << "\nVector y components: ";

    Vector y = W * x;
    for(double v: y.data){
        cout << v << " ";
    }

    return 0;

}
