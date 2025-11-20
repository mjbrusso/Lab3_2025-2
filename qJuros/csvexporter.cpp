#include "csvexporter.h"

void CSVExporter::save(const CompoundInterestCalculator::rows &data){
    csv_file_ << "Mês;Juros;Valor Atualizado\n";
    for(const auto &[m, j, v] : data){
        csv_file_ << m << ';' << j << ';' << v << '\n';
    }
}
