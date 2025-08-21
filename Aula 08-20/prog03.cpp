#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> fila;

    fila.push("File");
    fila.push("Edit");
    fila.push("Selection");
    fila.push("View");
    fila.push("Go");

    while (!fila.empty()){
        cout << "Tamanho: "
             << fila.size() << endl
             << "Primeiro: " 
             << fila.front() << endl
             << "Último: "
             << fila.back() << endl;
        
        fila.pop();
    }
}
