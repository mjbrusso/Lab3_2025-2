#include <iomanip>
#include <iostream>
#include <ios>

struct registro_temperatura {
  int dia;
  int mes;
  int ano;
  float min;
  float max;

  bool valid() const {
    return dia != 0 || mes != 0 || ano != 0 || min != 0.0 || max != 0.0;
  }

  operator bool(){
    return valid();
  }
};

std::ostream &operator<<(std::ostream &os, const registro_temperatura &reg) {
  os << std::fixed << std::setprecision(1) << reg.dia << '\t' << reg.mes << '\t'
     << reg.ano << '\t' << reg.min << '\t' << reg.max << '\n';     
  return os;
}

std::istream &operator>>(std::istream &is, registro_temperatura &reg) {
  is >> reg.dia >> reg.mes >> reg.ano >> reg.min >> reg.max;
  if(!reg.valid()) {
    is.setstate(std::ios::eofbit);
  }
  return is;
}

bool operator<(const registro_temperatura& lhs, const registro_temperatura& rhs) {
    if (lhs.min != rhs.min)
        return lhs.min < rhs.min;
    if (lhs.max != rhs.max)
        return lhs.max > rhs.max; 
    if (lhs.ano != rhs.ano)
        return lhs.ano < rhs.ano;
    if (lhs.mes != rhs.mes)
        return lhs.mes < rhs.mes;
    return lhs.dia < rhs.dia;
}
