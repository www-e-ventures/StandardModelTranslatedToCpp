// StandardModelParticles.h
#ifndef STANDARD_MODEL_PARTICLES_H
#define STANDARD_MODEL_PARTICLES_H

//https://e.ventures
//the@e.ventures
//MIT License

#include "Fermion.h"
#include "Boson.h"

class Electron : public Fermion {
public:
    Electron() : Fermion("Electron", 0.511, -1.0) {}
};

class Neutrino : public Fermion {
public:
    Neutrino() : Fermion("Neutrino", 0.0, 0.0) {}
};

class UpQuark : public Fermion {
public:
    UpQuark() : Fermion("Up Quark", 2.3, 2.0 / 3.0) {}
};

class DownQuark : public Fermion {
public:
    DownQuark() : Fermion("Down Quark", 4.8, -1.0 / 3.0) {}
};

class Photon : public Boson {
public:
    Photon() : Boson("Photon", 0.0, 1.0) {}
};

class Wboson : public Boson {
public:
    Wboson() : Boson("W Boson", 80.379, 1.0) {}
};

class Zboson : public Boson {
public:
    Zboson() : Boson("Z Boson", 91.1876, 1.0) {}
};

#endif // STANDARD_MODEL_PARTICLES_H
