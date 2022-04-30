#include "header.h"
void data::setmed(double sk) { medrezult = sk; }
double data::getmed() const { return medrezult; }

void data::setvid(double sk) { vidrezult = sk; }
double data::getvid() const { return vidrezult; }

void data::setegz(double sk) { egz = sk; }
int data::getegz() const { return egz; }

void data::setpaz(int i, double sk) { paz[i] = sk; }
int data::getpaz(int i) const { return paz[i]; }

void data::setvard(string vardas) { vard = vardas; }
void data::setpav(string pavarde) { pav = pavarde; }
string data::getvard() const { return vard; }
string data::getpav() const { return pav; }