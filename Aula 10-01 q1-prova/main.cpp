
#include <iostream>
#include <vector>
#include <algorithm>
#include "registro_temperatura.cpp"

int main() {
    std::vector<registro_temperatura> historico;
    registro_temperatura temp;

    while (std::cin >> temp) {
        historico.push_back(temp);
    }

    std::sort(historico.begin(),historico.end());

    for(const auto &r: historico){
        std::cout << r;
    }
}

