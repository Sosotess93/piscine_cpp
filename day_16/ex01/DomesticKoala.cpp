#include <map>
#include <vector>
#include "DomesticKoala.h"

DomesticKoala::DomesticKoala(KoalaAction &k) :_k(k) {}

DomesticKoala::DomesticKoala(const DomesticKoala &other) : _m(other.getMap()) {}

DomesticKoala::~DomesticKoala() {}

std::map<unsigned char, DomesticKoala::methodPointer_t> DomesticKoala::getMap() const
{
  return _m;
}

std::vector<DomesticKoala::methodPointer_t> const *DomesticKoala::getActions() const
{
  int index = 0;
  std::vector<DomesticKoala::methodPointer_t> *vect;
  vect = new std::vector<DomesticKoala::methodPointer_t>;

  for (std::map<unsigned char, DomesticKoala::methodPointer_t>::const_iterator it = _m.begin(); it != _m.end(); ++it)
    (*vect)[index] = it->second;
  return (vect);
}

void		DomesticKoala::learnAction(unsigned char c, DomesticKoala::methodPointer_t funct)
{
  _m[c] = funct;
}

void		DomesticKoala::unlearnAction(unsigned char c)
{
  _m.erase(c);
}

void		DomesticKoala::doAction(unsigned char c, const std::string &str)
{
  (_k.*_m[c])(str);
}

void		DomesticKoala::setKoalaAction(KoalaAction& k)
{
  _m.clear();
  _k = k;
}

DomesticKoala	&DomesticKoala::operator=(DomesticKoala const &other)
{
  _m = other.getMap();
  return *this;
}
