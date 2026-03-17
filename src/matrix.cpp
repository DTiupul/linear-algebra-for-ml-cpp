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

Vector Matrix::operator*(const Vector& v){
    if(cols != v.data.size()){
        __throw_invalid_argument("Dimension mismatch");
    }

    Vector result(rows);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result.data[i] += v.data[j] * data[i][j];
        }
    }

    return result;
}
