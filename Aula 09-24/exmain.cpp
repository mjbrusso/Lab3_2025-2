#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  int n;

  try{
    cin >> s;
    n = stoi(s);
    cout << "Inteiro: " << n << " Dobro: " << n * 2 << endl;
  }
  catch(invalid_argument &e){
    cout << "Não foi possível converter: " << e.what() << endl;
    return 1;
  }
  catch(out_of_range &e){
    cout << "Valor fora do intervalo: " << e.what() << endl;
    return 2;
  }
  catch(exception &e){
    cout << "Outro erro: " << e.what() << endl;
    return 3;
  }
}
