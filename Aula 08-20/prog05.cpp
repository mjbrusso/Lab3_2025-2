#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> conjunto;
    string s;

    cout << "Digite palavras [ENTER para sair]\n";
    while (getline(cin, s) && s != "")
    {
        conjunto.insert(s);
    }

    cout << "|conjunto| = " << conjunto.size() << endl;
    for (auto val : conjunto)
    {
        cout << val << "\n";
    }
    cout << endl;

    cout << "Pesquisar: ";
    getline(cin, s);
    cout << (conjunto.count(s)==0 ? "Not f" : "F") << "ound!\n";
}
