#include <iostream>
#include "../qJuros/compoundinterestcalculator.h"
#include "../qJuros/csvexporter.h"

using namespace std;

int main(){
    double valor, taxa;
    int meses;

    cout << "Valor da Aplicação: ";
    cin >> valor;

    cout << "Taxa de Juros Mensal: ";
    cin >> taxa;

    cout << "Número de Meses: ";
    cin >> meses;

    CompoundInterestCalculator calc;
    calc.setAmount(valor);
    calc.setRate(taxa);
    calc.setMonths(meses);

    auto resultado = calc.calculate();

    for(const auto &[m, j, v] : resultado){
        cout << m << '\t' << j << '\t' << v << '\n';
    }

    CSVExporter csv("resultado.csv");
    csv.save(resultado);
}
