#include <iostream>
#include <iomanip>
#include <unordered_map>

using namespace std;

int main(){
    int n, m, p, quant;
    string nome;
    float preco;

    cin >> n;
    while(n--){ // Para cada caso de teste
        unordered_map<string, float> produtos;
        cin >> m;
        while(m--){ // Para cada produto
            cin >> nome >> preco;
            produtos[nome] = preco;
        }
        float total = 0.0;
        cin >> p;
        while(p--){ // Para cada item a ser comprado
            cin >> nome >> quant;
            total += produtos[nome] * quant;
        }
        cout << "R$ " << fixed << setprecision(2)
             << total << endl;
    }
}