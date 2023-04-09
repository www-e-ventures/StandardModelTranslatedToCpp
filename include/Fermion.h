// Fermion.h
#ifndef FERMION_H
#define FERMION_H

#include "Particle.h"

class Fermion : public Particle {
public:
    Fermion(std::string name, double mass, double charge)
            : Particle(name, mass), charge(charge) {}

    double getCharge() const { return charge; }

private:
    double charge;
};

#endif // FERMION_H
