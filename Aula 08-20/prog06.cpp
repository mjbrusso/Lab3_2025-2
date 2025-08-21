#include <iostream>
#include <map>

using namespace std;

int
main()
{
  map<int, string> alunos;
  alunos[908543] = "Fulano";
  alunos[887766] = "Betrano";
  alunos[554433] = "Cicrano";

  while (true) {
    for (auto& [matr, nome] : alunos) {
      cout << matr << "\t" << nome << endl;
    }

    int m;
    cout << "Matrícula [0 p/ Sair]: ";
    cin >> m;
    if(m==0) break;
    if(alunos.count(m)==0)
        cout << "Não achou!\n";
    else{
        cout << "Nome: " << alunos[m] << endl;
        alunos.erase(m);
    }
  }
}
