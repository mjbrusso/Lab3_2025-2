#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct produto
{
    int codigo;
    string nome;
    float preco;
};

int main()
{
    vector<produto> carrinho{
        {1234, "Coca Cola", 5.0},
        {3210, "Pastel", 10},
        {9876, "Trident", 4},
        {6578, "Agua mineral", 4}};

    sort(carrinho.begin(),
         carrinho.end(),
         [](const auto &p1, const auto &p2)
         { return p1.preco < p2.preco || (p1.preco == p2.preco && p1.nome < p2.nome); });

    for (const auto &p : carrinho)
        cout << p.codigo << "\t"
             << p.nome << "\t"
             << fixed << setprecision(2) << p.preco << endl;

    cout << endl;
}
