// Boson.h
#ifndef BOSON_H
#define BOSON_H
//https://e.ventures
//the@e.ventures
//MIT License
#include "Particle.h"

class Boson : public Particle {
public:
    Boson(std::string name, double mass, double spin) : Particle(name, mass), spin(spin) {}

    double getSpin() const { return spin; }

private:
    double spin;
};

#endif // BOSON_H
