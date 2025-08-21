#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> pilha;

    pilha.push("File");
    pilha.push("Edit");
    pilha.push("Selection");
    pilha.push("View");
    pilha.push("Go");

    while (!pilha.empty()){
        cout << "Tamanho: "
             << pilha.size() << endl
             << "Topo: " << pilha.top() << endl;
        
        pilha.pop();
    }
}
