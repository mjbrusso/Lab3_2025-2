#ifndef COMPOUNDINTERESTCALCULATOR_H
#define COMPOUNDINTERESTCALCULATOR_H
#include <vector>
#include <tuple>

class CompoundInterestCalculator
{
    using row = std::tuple<int, double, double>;
    using rows = std::vector<row>;
public:
    CompoundInterestCalculator();

    int months() const;
    void setMonths(int newMonths);

    double amount() const;
    void setAmount(double newAmount);

    double rate() const;
    void setRate(double newRate);

    rows calculate();
private:
    int months_;
    double amount_;
    double rate_;
};

#endif // COMPOUNDINTERESTCALCULATOR_H
