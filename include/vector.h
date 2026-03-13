 #pragma once
 #include <vector>
 #include <math.h>


 class Vector{
    public:
        std::vector<double> data;
        Vector(int n);
        double dot(const Vector& other) ;
        double norm() const;
        Vector add(const Vector& other);
        Vector substract(const Vector& other);
        double cosine_similarity(const Vector& other);
 };