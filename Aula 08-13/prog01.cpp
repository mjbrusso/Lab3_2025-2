#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numeros{22, 715, 88};

    std::cout << "Tamanho: " << numeros.size() << '\n';

    numeros.push_back(100); // Insere no final
    numeros.push_back(-75);

    auto ib = numeros.begin(); // Iterator para o primeiro elemento
    std::cout << *ib << '\n';  // "past-the-end" iterator

    std::cout << "Primeiro: " << numeros.front() << '\n'
              << "Último: " << numeros.back() << '\n';

    std::cout << "Old school for loop\n";
    for (int i = 0; i < numeros.size(); i++)
        std::cout << numeros[i] << '\n';

    std::cout << "C++ range for\n";
    for (auto n : numeros)
        std::cout << n << '\n';

    numeros.pop_back();    // Deleta o último valor
    std::cout << "For com iterator\n";
    for(auto it=numeros.begin(); it!=numeros.end(); it++)
        std::cout << *it << '\n';
    
    numeros.clear(); // Deleta todos os valores
}
