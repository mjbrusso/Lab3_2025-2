#include <iostream>
#include <set>
#include <algorithm>
#include "registro_temperatura.cpp"

int main() {
    std::set<registro_temperatura> historico;
    registro_temperatura temp;

    while (std::cin >> temp) 
        historico.insert(temp);
    
    for(const auto &r: historico)
        std::cout << r;
}

