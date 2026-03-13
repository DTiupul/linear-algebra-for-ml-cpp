 #pragma once
 #include <vector>
 #include <math.h>


 class Vector{
    public:
        std::vector<double> data;
        Vector(int n);
        double operator*(const Vector& other) const;
        double norm() const;
        Vector operator+(const Vector& other);
        Vector operator-(const Vector& other);
        double cosine_similarity(const Vector& other);
 };