#include <iostream>
#include "../include/vector.h"

int main(){
    int n;
    
    std::cout << "write down a and b length: " << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    
    Vector a(n);
    Vector b(n);

    std::cout << "write down a components: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << "a[" << i << "]: ";
        std::cin >> a.data[i];
    }

    std::cout << std::endl;
    
    std::cout << "write down b components: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << "a[" << i << "]: ";
        std::cin >> b.data[i];
    }
    
    std::cout << "Dot product between a and b is: " << a.dot(b) << std::endl;
    std::cout << "a's norm is: " << a.norm() << std::endl;
    std::cout << "b's norm is: " << b.norm() << std::endl; 

    Vector c = a.add(b); 
    std::cout << "a add b is: ";
    for(double x: c.data){
        std::cout << x << ", ";
    }
    std::cout << std::endl;

    Vector d = a.substract(b);
    std::cout << "a subtracted b is: ";
    for(double y: d.data){
        std::cout << y << ", ";
    }
    std::cout << std::endl;

    std::cout << "cosine similarity between a and b is: " << a.cosine_similarity(b) << std::endl;
}