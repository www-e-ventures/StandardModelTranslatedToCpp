//
// Created by sea on 06/04/23.
//
// Particle.h
#ifndef PARTICLE_H
#define PARTICLE_H

#include <string>

class Particle {
public:
    Particle(std::string name, double mass) : name(name), mass(mass) {}
    virtual ~Particle() {}

    std::string getName() const { return name; }
    double getMass() const { return mass; }

private:
    std::string name;
    double mass;
};

#endif // PARTICLE_H
