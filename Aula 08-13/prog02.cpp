#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct aluno{
    string nome;
    string email;
};

int main()
{
    vector<aluno> turma;
    aluno aux;

    while(true){
        cout << "Nome [ENTER para sair]: ";
        getline(cin, aux.nome);
        if(aux.nome=="") break;
        cout << "EMail: ";
        getline(cin, aux.email);

        turma.push_back(aux);
    }

    cout << "Turma com " << turma.size() << " alunos\n";
    for(const aluno &a: turma){
        cout << a.nome << "\t" << a.email << endl;
    }
    
    // Só para lembrar que com iterator usa ->
    // for(auto it=turma.begin(); it!=turma.end(); it++){
    //     cout << it->nome << "\t" << it->email << endl;
    // }
}
