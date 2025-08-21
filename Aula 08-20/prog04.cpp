#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> conjunto;
    string s;

    cout << "Digite palavras [ENTER para sair]\n";
    while (getline(cin, s) && s != ""){
        conjunto.insert(s);
    }

    cout << "|conjunto| = " << conjunto.size() << endl;
    for(auto val : conjunto){
        cout << val << "\n";
    }
    cout << endl;
}
