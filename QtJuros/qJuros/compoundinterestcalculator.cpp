#include "compoundinterestcalculator.h"

CompoundInterestCalculator::CompoundInterestCalculator()
{

}

int CompoundInterestCalculator::months() const
{
    return months_;
}

void CompoundInterestCalculator::setMonths(int newMonths)
{
    months_ = newMonths;
}

double CompoundInterestCalculator::amount() const
{
    return amount_;
}

void CompoundInterestCalculator::setAmount(double newAmount)
{
    amount_ = newAmount;
}

double CompoundInterestCalculator::rate() const
{
    return rate_;
}

void CompoundInterestCalculator::setRate(double newRate)
{
    rate_ = newRate;
}

CompoundInterestCalculator::rows CompoundInterestCalculator::calculate(){
    CompoundInterestCalculator::rows result;

    double currentAmount = amount_;
    for(int m=1; m<=months_; m++){
        double interest = static_cast<int>(((rate_ / 100) * currentAmount) * 100) / 100.0;
        currentAmount += interest;
        result.emplace_back(m, interest, currentAmount);
    }
    return result;
}
























