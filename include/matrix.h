#pragma once
#include <vector>
#include "vector.h"
using namespace std;

class Matrix{
public:
    int rows, cols;
    vector<vector<double>> data;
  
    Matrix(int r, int c);
  
    Matrix multiply(const Matrix& other);
    Vector multiply(const Vector& other);
    Matrix transpose();
};