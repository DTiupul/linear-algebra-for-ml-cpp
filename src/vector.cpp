#include "../include/vector.h"

Vector::Vector(int n){
    data.resize(n);
}

double Vector::dot(const Vector& other){
    double dot_result = 0;
    for(int i = 0; i < data.size(); i++){
        dot_result += data[i] * other.data[i];
    }
    return dot_result;
}

double Vector::norm() const{
    double norm_result = 0;
    for(int i = 0; i < data.size(); i++){
        norm_result += data[i] * data[i];
    }
    return sqrt(norm_result);
}

Vector Vector::add(const Vector& other){
    Vector add_result(data.size());

    for(int i = 0;i < data.size(); i++){
        add_result.data[i] = data[i] + other.data[i];
    }
    return add_result;
}

Vector Vector::substract(const Vector& other){
    Vector substract_result(data.size());

    for(int i = 0;i < data.size(); i++){
        substract_result.data[i] = data[i] - other.data[i];
    }

    return substract_result;
}

double Vector::cosine_similarity(const Vector& other){
    double dot_product = dot(other);
    double norm_a = norm();
    double norm_b = other.norm();

    if (norm_a == 0 || norm_b == 0) {
        throw("Zero vector detected");
    }

    return dot_product / (norm_a * norm_b);

    
}