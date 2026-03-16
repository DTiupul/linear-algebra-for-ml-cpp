#include "../include/matrix.h"

Matrix::Matrix(int r, int c){
    rows = r;
    cols = c;

    data = vector<vector<double>>(r, vector<double>(c,0.0));
    
}   

Matrix Matrix::multiply(const Matrix& other){
    if(data[0].size() != other.data.size()){
        throw("Unable to multiply (check the dimentions)");
    }

    Matrix result(data.size(), other.data[0].size());
    
    for(int k = 0; k < other.data[0].size(); k++){
        for(int i = 0; i < data.size(); i++){
            for(int j = 0; j < data[0].size(); j++){
                result.data[i][k] += data[i][j] * other.data[j][k];
            }
        }
    }
    
    return result;
           
}

Matrix Matrix::transpose(){
    
}
