#include <iostream>
#include<concepts>

template<typename T>
requires std::integral<T>
T add(T a, T b){
    return a+b;
}

int main(){
    std::cout << "C++ 20 with Cmake" << std::endl;
    std::cout << "Sunm is " << add(5,7) << std::endl;
    return 0;
}