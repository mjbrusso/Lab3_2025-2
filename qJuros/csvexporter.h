#ifndef CSVEXPORTER_H
#define CSVEXPORTER_H
#include <string>
#include <fstream>
#include "compoundinterestcalculator.h"

class CSVExporter
{
public:
    CSVExporter(const std::string &filename):csv_file_(filename){
    }

    ~CSVExporter(){
        csv_file_.close();
    }

    void save(const CompoundInterestCalculator::rows &data);

private:
    std::ofstream csv_file_;  // Output File Stream
};

#endif // CSVEXPORTER_H
