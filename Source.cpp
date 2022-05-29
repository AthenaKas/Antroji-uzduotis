#include "header.h"

d::~d() //destructor
{
    std::fill_n(paz, 20, 0);
}

d::d(const d& d) // copy konstruktorius
{
    vard = d.vard;
    pav = d.pav;
    egz = d.egz;
    vidrezult = d.vidrezult;
    medrezult = d.medrezult;
}

d& d::operator=(const d& d) //copy assignment
{ 
    if (&d == this) return *this;
    vard = d.vard;
    pav = d.pav;
    egz = d.egz;
    vidrezult = d.vidrezult;
    medrezult = d.medrezult;
    return *this;
}

void d::setmed(double sk) { medrezult = sk; }
double d::getmed() const { return medrezult; }

void d::setvid(double sk) { vidrezult = sk; }
double d::getvid() const { return vidrezult; }

void d::setegz(double sk) { egz = sk; }
int d::getegz() const { return egz; }

void d::setpaz(int i, double sk) { paz[i] = sk; }
int d::getpaz(int i) const { return paz[i]; }

void d::setvard(string vardas) { vard = vardas; }
void d::setpav(string pavarde) { pav = pavarde; }

